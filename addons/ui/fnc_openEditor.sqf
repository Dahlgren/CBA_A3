#include "script_component.hpp"

params ["_control"];
private _display = ctrlParent _control;

private _editor = _display displayCtrl IDC_SP_EDITOR;
ctrlActivate _editor;

0 spawn {
    private _display = findDisplay IDD_SELECT_ISLAND;
    private _maps = _display displayCtrl IDC_SELECT_ISLAND;

    for "_i" from 0 to (lbSize _maps - 1) do {
        if (_maps lbData _i == "VR") exitWith {
            _maps lbSetCurSel _i;
        };
    };

    uiNamespace setVariable [QGVAR(openLoadMissionMenu), true];

    private _continue = _display displayCtrl IDC_OK;
    ctrlActivate _continue;
};
