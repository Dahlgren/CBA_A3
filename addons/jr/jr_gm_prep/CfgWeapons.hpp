class CfgWeapons {
    class Rifle_Base_F;

    class gm_rifle_base: Rifle_Base_F {
        class WeaponSlotsInfo;
    };

    class gm_ak47_base: gm_rifle_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete MuzzleSlot;
        };
    };

    class gm_akm_base: gm_ak47_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
        };
    };

    class gm_rpk_base: gm_ak47_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
            delete MuzzleSlot;
        };
    };

    class gm_ak74_base: gm_rifle_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
            delete MuzzleSlot;
        };
    };

    class gm_ak74n_base: gm_ak74_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
        };
    };

    class gm_rpk74_base: gm_ak74_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
            delete MuzzleSlot;
        };
    };

    class gm_svd_base: gm_rifle_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
            delete MuzzleSlot;
        };
    };

    class gm_g3_base: gm_rifle_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete MuzzleSlot;
        };
    };

    class gm_m16_base: gm_rifle_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete MuzzleSlot;
        };
    };

    class gm_c7a1_base: gm_m16_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
        };
    };
};
