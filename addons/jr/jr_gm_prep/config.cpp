#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = CSTRING(component);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_jr",
            "gm_weapons_rifles_ak47",
            "gm_weapons_rifles_ak74",
            "gm_weapons_rifles_g3",
            "gm_weapons_rifles_g36",
            "gm_weapons_rifles_m16",
            "gm_weapons_rifles_mp5",
            "gm_weapons_rifles_svd"
        };
        author = "$STR_CBA_Author";
        authors[] = {};
        url = "$STR_CBA_URL";
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
