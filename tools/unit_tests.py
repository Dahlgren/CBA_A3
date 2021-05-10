import os
import re
import subprocess
import sys

def arma3_ubc():
    script_path = os.path.dirname(os.path.realpath(__file__))
    ubc_file = open(os.path.join(script_path, "arma3_ubc.txt"), "r")
    return [line.rstrip() for line in ubc_file.readlines()]

class CBAParser:

    line_prefix = '[CBA] '
    line_success = 'Test OK: '
    line_failure = 'ERROR: Test FAIL '

    success = []
    failure = []

    def process_line(self, line):
        if line.startswith(self.line_prefix):
            line = line.lstrip(self.line_prefix)
            if self.line_success in line:
                line = line.replace(self.line_success, '')
                self.success.append(line)
            elif self.line_failure in line:
                line = line.replace(self.line_failure, '')
                self.failure.append(line)

class UBCParser:

    line_prefix = 'Updating base class '
    base_arma3_ubc = arma3_ubc()

    ubc = []

    def process_line(self, line):
        if line.startswith(self.line_prefix) and line not in self.base_arma3_ubc:
            self.ubc.append(line.lstrip(self.line_prefix))

class XEHParser:

    line_prefix = '[CBA] (xeh) WARNING: '

    xeh = []

    def process_line(self, line):
        if line.startswith(self.line_prefix):
            self.ubc.append(line.lstrip(self.line_prefix))


def run():
    cmd = ["./arma3server_x64", "-autoinit", "-config=server.cfg", "-mod=@cba_a3"]
    return_code_mission_ended = -11

    proc = subprocess.Popen(cmd, stdout = subprocess.PIPE, stderr = subprocess.STDOUT, universal_newlines = True)

    for stdout_line in iter(proc.stdout.readline, ""):
        yield stdout_line.strip()

    proc.stdout.close()
    return_code = proc.wait()

    if return_code and return_code != return_code_mission_ended:
        print(return_code)
        raise subprocess.CalledProcessError(return_code, cmd)


cba_parser = CBAParser()
ubc_parser = UBCParser()
xeh_parser = XEHParser()

for line in run():
    print(line)

    line = re.sub(r'^\d+:\d+:\d+ ', '', line)

    cba_parser.process_line(line)
    ubc_parser.process_line(line)
    xeh_parser.process_line(line)

print("=======================")
print(f"CBA success: {len(cba_parser.success)}")
print(f"CBA failure: {len(cba_parser.failure)}")
print(f"UBC issues: {len(ubc_parser.ubc)}")
print(f"XEH issues: {len(xeh_parser.xeh)}")
print("=======================")

sys.exit(len(cba_parser.failure) + len(ubc_parser.ubc) + len(xeh_parser.xeh))
