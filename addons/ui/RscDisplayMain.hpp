class RscStandardDisplay;
class RscControlsGroupNoScrollbars;

class RscDisplayMain: RscStandardDisplay {
    class controls {
        class GroupSingleplayer: RscControlsGroupNoScrollbars {
            class Controls;
        };
        class GroupTutorials: GroupSingleplayer {
            h = "(6 *   1.5) *  (pixelH * pixelGrid * 2)";

            class Controls: Controls {
                class Bootcamp;
                class GVAR(Editor): Bootcamp {
                    idc = -1;
                    text = "Open Editor";
                    tooltip = "Select a mission to open in the editor.";
                    y = "(5 *   1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
                    onButtonClick = QUOTE(_this call (uiNamespace getVariable 'FUNC(openEditor)'));
                    //animTextureNormal = QPATHTOF(data\buttonX_ca.paa);
                    //animTextureDisabled = QPATHTOF(data\buttonX_ca.paa);
                    //animTextureOver = QPATHTOF(data\buttonXHover_ca.paa);
                    //animTextureFocused = QPATHTOF(data\buttonXHover_ca.paa);
                    //animTexturePressed = QPATHTOF(data\buttonX_ca.paa);
                    //animTextureDefault = QPATHTOF(data\buttonX_ca.paa);
                };
            };
        };
    };
};
