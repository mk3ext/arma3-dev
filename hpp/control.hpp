class AdminMenu {

	idd = 1234;

	class controls {
		class playerlistbox: RscListBox
		{
			idc = 1500;
			colorBackground[] = {0.2,0.2,0.2,1}; // Fill color
			colorSelectBackground[] = {1,0.5,0,1}; // Selected item fill color
			colorSelectBackground2[] = {0,0,0,1}; // Selected item fill color (oscillates between this and colorSelectBackground)

			sizeEx = GUI_GRID_CENTER_H; // Text size
			itemSpacing = 0; // Height of empty space between items
			font = GUI_FONT_NORMAL; // Font from CfgFontFamilies
			shadow = 0; // Shadow (0 - none, 1 - directional, color affected by colorShadow, 2 - black outline)
			colorText[] = {1,1,1,1}; // Text and frame color
			colorDisabled[] = {1,1,1,0.5}; // Disabled text color
			colorSelect[] = {1,1,1,1}; // Text selection color
			colorSelect2[] = {1,1,1,1}; // Text selection color (oscillates between this and colorSelect)
			colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)

			pictureColor[] = {1,0.5,0,1}; // Picture color
			pictureColorSelect[] = {1,1,1,1}; // Selected picture color
			pictureColorDisabled[] = {1,1,1,0.5}; // Disabled picture color

			x = 0.005 * safezoneW + safezoneX;
			y = 0.016 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.968 * safezoneH;
			class ListScrollBar
			{
				width = 0; // Unknown?
				height = 0; // Unknown?
				scrollSpeed = 0.01; // Unknown?

				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

				color[] = {1,1,1,1}; // Scrollbar color
			};
		};
		class buttongear: RscButton
		{
			idc = 1610;
			text = "Load Admin Gear";
			action = "player call xat_fnc_gear";
			sizeEx = GUI_GRID_CENTER_H; // Text size
			font = GUI_FONT_NORMAL; // Font from CfgFontFamilies
			//shadow = 1; // Shadow (0 - none, 1 - N/A, 2 - black outline)
			blinkingPeriod = 0;
			colorBackground[] = {0.2,0.2,0.2,1}; // Fill color
			//colorBackgroundDisabled[] = {0,0,0,0.5}; // Disabled fill color
			//colorBackgroundActive[] = {0,0,0,1}; // Mouse hover fill color
			//colorFocused[] = {1,0.5,0,1}; // Selected fill color (oscillates between this and colorBackground)
			colorText[] = {1,1,1,1}; // Text color
			//colorDisabled[] = {1,1,1,0.5}; // Disabled text color
			x = 0.845469 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
			
		};
		class buttonweaponmenu: RscButton
		{
			idc = 1601;
			text = "Weapon Menu"
			action = "player call xat_fnc_getweapons";
			sizeEx = GUI_GRID_CENTER_H;
			font = GUI_FONT_NORMAL;
			blinkingPeriod = 0;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorText[] = {1,1,1,1}; 

			x = 0.845469 * safezoneW + safezoneX;
			y = 0.115 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class buttongod: RscButton
		{
			idc = 1600;
			text = "God (Self)"
			action = "player call xat_fnc_god";
			sizeEx = GUI_GRID_CENTER_H;
			font = GUI_FONT_NORMAL;
			blinkingPeriod = 0;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorText[] = {1,1,1,1}; 

			x = 0.845469 * safezoneW + safezoneX;
			y = 0.17 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class buttonvanish: RscButton
		{
			idc = 1603;
			text = "Vanish (Self)"
			action = "player call xat_fnc_vanish";
			sizeEx = GUI_GRID_CENTER_H;
			font = GUI_FONT_NORMAL;
			blinkingPeriod = 0;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorText[] = {1,1,1,1}; 

			x = 0.845469 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class buttontpme: RscButton
		{
			idc = 1602;
			text = "TP (me to them)"
			action = "(lbCurSel 1500) call xat_fnc_tpmetothem";
			sizeEx = GUI_GRID_CENTER_H;
			font = GUI_FONT_NORMAL;
			blinkingPeriod = 0;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorText[] = {1,1,1,1}; 

			x = 0.845469 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class buttontpthem: RscButton
		{
			idc = 1604;
			text = "TP (them to me)"
			action = "(lbCurSel 1500) call xat_fnc_tpthemtome";
			sizeEx = GUI_GRID_CENTER_H;
			font = GUI_FONT_NORMAL;
			blinkingPeriod = 0;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorText[] = {1,1,1,1}; 

			x = 0.845469 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class buttonkillplayer: RscButton
		{
			idc = 1606;
			text = "Kill"
			action = "(lbCurSel 1500) call xat_fnc_kill";
			sizeEx = GUI_GRID_CENTER_H;
			font = GUI_FONT_NORMAL;
			blinkingPeriod = 0;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorText[] = {1,1,1,1}; 

			x = 0.845469 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class buttonhealplayer: RscButton
		{
			idc = 1607;
			text = "Heal Player"
			action = "(lbCurSel 1500) call xat_fnc_healplayer";
			sizeEx = GUI_GRID_CENTER_H;
			font = GUI_FONT_NORMAL;
			blinkingPeriod = 0;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorText[] = {1,1,1,1}; 

			x = 0.845469 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class buttonhealnear: RscButton
		{
			idc = 1608;
			text = "Heal Near"
			action = "player call xat_fnc_healnear";
			sizeEx = GUI_GRID_CENTER_H;
			font = GUI_FONT_NORMAL;
			blinkingPeriod = 0;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorText[] = {1,1,1,1}; 
			x = 0.845469 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class buttonrepairnear: RscButton
		{
			idc = 1609;
			text = "Repair Near"
			action = "player call xat_fnc_repairnear";
			sizeEx = GUI_GRID_CENTER_H;
			font = GUI_FONT_NORMAL;
			blinkingPeriod = 0;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorText[] = {1,1,1,1}; 

			x = 0.845469 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class buttoneveln: RscButton
		{
			idc = 1605;
			sizeEx = GUI_GRID_CENTER_H; // Text size
			font = GUI_FONT_NORMAL; // Font from CfgFontFamilies
			shadow = 1; // Shadow (0 - none, 1 - N/A, 2 - black outline)
			blinkingPeriod = 0;
			colorBackground[] = {0.2,0.2,0.2,1}; // Fill color
			colorBackgroundDisabled[] = {0,0,0,0.5}; // Disabled fill color
			colorBackgroundActive[] = {0,0,0,1}; // Mouse hover fill color
			colorFocused[] = {1,0.5,0,1}; // Selected fill color (oscillates between this and colorBackground)
			colorText[] = {1,1,1,1}; // Text color
			colorDisabled[] = {1,1,1,0.5}; // Disabled text color

			x = 0.845469 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class buttontwelve: RscButton
		{
			idc = 1611;
			sizeEx = GUI_GRID_CENTER_H; // Text size
			font = GUI_FONT_NORMAL; // Font from CfgFontFamilies
			shadow = 1; // Shadow (0 - none, 1 - N/A, 2 - black outline)
			blinkingPeriod = 0;
			colorBackground[] = {0.2,0.2,0.2,1}; // Fill color
			colorBackgroundDisabled[] = {0,0,0,0.5}; // Disabled fill color
			colorBackgroundActive[] = {0,0,0,1}; // Mouse hover fill color
			colorFocused[] = {1,0.5,0,1}; // Selected fill color (oscillates between this and colorBackground)
			colorText[] = {1,1,1,1}; // Text color
			colorDisabled[] = {1,1,1,0.5}; // Disabled text color
			x = 0.845469 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class buttonthreeteen: RscButton
		{
			idc = 1612;
			sizeEx = GUI_GRID_CENTER_H; // Text size
			font = GUI_FONT_NORMAL; // Font from CfgFontFamilies
			shadow = 1; // Shadow (0 - none, 1 - N/A, 2 - black outline)
			blinkingPeriod = 0;
			colorBackground[] = {0.2,0.2,0.2,1}; // Fill color
			colorBackgroundDisabled[] = {0,0,0,0.5}; // Disabled fill color
			colorBackgroundActive[] = {0,0,0,1}; // Mouse hover fill color
			colorFocused[] = {1,0.5,0,1}; // Selected fill color (oscillates between this and colorBackground)
			colorText[] = {1,1,1,1}; // Text color
			colorDisabled[] = {1,1,1,0.5}; // Disabled text color

			x = 0.845469 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class buttonfourteen: RscButton
		{
			idc = 1613;
			sizeEx = GUI_GRID_CENTER_H; // Text size
			font = GUI_FONT_NORMAL; // Font from CfgFontFamilies
			shadow = 1; // Shadow (0 - none, 1 - N/A, 2 - black outline)
			blinkingPeriod = 0;
			colorBackground[] = {0.2,0.2,0.2,1}; // Fill color
			colorBackgroundDisabled[] = {0,0,0,0.5}; // Disabled fill color
			colorBackgroundActive[] = {0,0,0,1}; // Mouse hover fill color
			colorFocused[] = {1,0.5,0,1}; // Selected fill color (oscillates between this and colorBackground)
			colorText[] = {1,1,1,1}; // Text color
			colorDisabled[] = {1,1,1,0.5}; // Disabled text color

			x = 0.845469 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class buttonfifteen: RscButton
		{
			idc = 1614;
			sizeEx = GUI_GRID_CENTER_H; // Text size
			font = GUI_FONT_NORMAL; // Font from CfgFontFamilies
			shadow = 1; // Shadow (0 - none, 1 - N/A, 2 - black outline)
			blinkingPeriod = 0;
			colorBackground[] = {0.2,0.2,0.2,1}; // Fill color
			colorBackgroundDisabled[] = {0,0,0,0.5}; // Disabled fill color
			colorBackgroundActive[] = {0,0,0,1}; // Mouse hover fill color
			colorFocused[] = {1,0.5,0,1}; // Selected fill color (oscillates between this and colorBackground)
			colorText[] = {1,1,1,1}; // Text color
			colorDisabled[] = {1,1,1,0.5}; // Disabled text color

			x = 0.845469 * safezoneW + safezoneX;
			y = 0.83 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class buttonsixteen: RscButton
		{
			idc = 1614;
			sizeEx = GUI_GRID_CENTER_H; // Text size
			font = GUI_FONT_NORMAL; // Font from CfgFontFamilies
			shadow = 1; // Shadow (0 - none, 1 - N/A, 2 - black outline)
			blinkingPeriod = 0;
			colorBackground[] = {0.2,0.2,0.2,1}; // Fill color
			colorBackgroundDisabled[] = {0,0,0,0.5}; // Disabled fill color
			colorBackgroundActive[] = {0,0,0,1}; // Mouse hover fill color
			colorFocused[] = {1,0.5,0,1}; // Selected fill color (oscillates between this and colorBackground)
			colorText[] = {1,1,1,1}; // Text color
			colorDisabled[] = {1,1,1,0.5}; // Disabled text color
			x = 0.845469 * safezoneW + safezoneX;
			y = 0.885 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.044 * safezoneH;
		};
	};
};
class Weapons {
	idd = 1235;

	class controls {
		class WeaponList: RscListBox
		{
			idc = 1300;
			colorBackground[] = {0.2,0.2,0.2,1}; // Fill color
			colorSelectBackground[] = {1,0.5,0,1}; // Selected item fill color
			colorSelectBackground2[] = {0,0,0,1}; // Selected item fill color (oscillates between this and colorSelectBackground)

			sizeEx = GUI_GRID_CENTER_H; // Text size
			itemSpacing = 0; // Height of empty space between items
			font = GUI_FONT_NORMAL; // Font from CfgFontFamilies
			shadow = 0; // Shadow (0 - none, 1 - directional, color affected by colorShadow, 2 - black outline)
			colorText[] = {1,1,1,1}; // Text and frame color
			colorDisabled[] = {1,1,1,0.5}; // Disabled text color
			colorSelect[] = {1,1,1,1}; // Text selection color
			colorSelect2[] = {1,1,1,1}; // Text selection color (oscillates between this and colorSelect)
			colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)

			pictureColor[] = {1,0.5,0,1}; // Picture color
			pictureColorSelect[] = {1,1,1,1}; // Selected picture color
			pictureColorDisabled[] = {1,1,1,0.5}; // Disabled picture color
			x = 0.005 * safezoneW + safezoneX;
			y = 0.016 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.968 * safezoneH;
			class ListScrollBar
			{
				width = 0; // Unknown?
				height = 0; // Unknown?
				scrollSpeed = 0.01; // Unknown?

				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

				color[] = {1,1,1,1}; // Scrollbar color
			};
		};
		class buttonGetWeapon: RscButton
		{
			idc = 1201;
			text = "Get Selected Weapon"
			action = "player call xat_fnc_spawnweapon";
			sizeEx = GUI_GRID_CENTER_H;
			font = GUI_FONT_NORMAL;
			colorBackground[] = {0.2,0.2,0.2,1};
			x = 0.185469 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};