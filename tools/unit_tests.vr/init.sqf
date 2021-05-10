private _test = 0 spawn compile preprocessFileLineNumbers "\x\cba\addons\main\test.sqf";
waitUntil { scriptDone _test };
endMission "END1";
