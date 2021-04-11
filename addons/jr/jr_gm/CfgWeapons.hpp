class CfgWeapons {
    class Rifle_Base_F;

    class gm_rifle_base: Rifle_Base_F {
        class WeaponSlotsInfo;
    };

    class gm_ak47_base: gm_rifle_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_762R {};
        };
    };

    class gm_akm_base: gm_ak47_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: asdg_OpticSideRail_AK {
                class compatibleItems {
                    gm_zvn64_ak = 1;
                    gm_zvn64_rear_ak = 1;
                };
            };
        };
    };

    class gm_rpk_base: gm_ak47_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: asdg_OpticSideRail_AK {
                class compatibleItems {
                    gm_zvn64_rear_rpk = 1;
                    gm_zvn64_rpk = 1;
                };
            };
            class MuzzleSlot: asdg_MuzzleSlot_762R {};
        };
    };

    class gm_ak74_base: gm_rifle_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: asdg_OpticSideRail_AK {
                class compatibleItems {
                    gm_zvn64_ak = 1;
                    gm_zvn64_rear_ak = 1;
                };
            };
            class MuzzleSlot: asdg_MuzzleSlot_545R {};
        };
    };

    class gm_ak74n_base: gm_ak74_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: asdg_OpticSideRail_AK {
                class compatibleItems {
                    gm_zvn64_ak = 1;
                    gm_zvn64_rear_ak = 1;
                };
            };
        };
    };

    class gm_rpk74_base: gm_ak74_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: asdg_OpticSideRail_AK {
                class compatibleItems {
                    gm_zvn64_rear_rpk = 1;
                    gm_zvn64_rpk = 1;
                };
            };
            class MuzzleSlot: asdg_MuzzleSlot_545R {};
        };
    };

    class gm_svd_base: gm_rifle_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: asdg_OpticSideRail_SVD {};
            class MuzzleSlot: asdg_MuzzleSlot_762R_SVD {};
        };
    };

    class gm_g3_base: gm_rifle_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_762 {};
        };
    };

    class gm_g36_base: gm_rifle_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_556 {};
        };
    };

    class gm_m16_base: gm_rifle_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_556 {};
        };
    };

    class gm_c7a1_base: gm_m16_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: asdg_OpticRail1913 {};
        };
    };

    class gm_mp5_base: gm_rifle_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_9MM_SMG {
                gm_suppressor_kacnavyk_9mm_blk = 1;
            };
        };
    };
};
