#include "script_component.hpp"

if (uiNamespace getVariable [QGVAR(openLoadMissionMenu), false]) then {
    uiNamespace setVariable [QGVAR(openLoadMissionMenu), false];

    0 spawn {
        do3DENAction "MissionLoad";
    };
};
