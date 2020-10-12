 /*
 *
 * Author: Andrew_S90
 *
 * This work is protected by Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0). 
 *
 */
class RscShortcutButtonV
{
	idc = -1;
	style = 0;
	default = 0;
	shadow = 1;
	w = 0.183825;
	h = "(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
	color[] = {1,1,1,1.0};
	colorFocused[] = {1,1,1,1.0};
	color2[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",1};
	colorBackgroundFocused[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",1};
	colorBackground2[] = {1,1,1,1};
	textSecondary = "";
	colorSecondary[] = {1,1,1,1.0};
	colorFocusedSecondary[] = {1,1,1,1.0};
	color2Secondary[] = {0.95,0.95,0.95,1};
	colorDisabledSecondary[] = {1,1,1,0.25};
	sizeExSecondary = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	fontSecondary = "RobotoCondensed";
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\over_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\focus_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\down_ca.paa";
	periodFocus = 1.2;
	periodOver = 0.8;
	class HitZone
	{
		left = 0.0;
		top = 0.0;
		right = 0.0;
		bottom = 0.0;
	};
	class ShortcutPos
	{
		left = 0;
		top = "(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		w = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		h = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};
	class TextPos
	{
		left = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		top = "(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0.0;
	};
	period = 0.4;
	font = "RobotoCondensed";
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";
	url = "";
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	action = "";
	class Attributes
	{
		font = "RobotoCondensed";
		color = "#E5E5E5";
		align = "left";
		shadow = "true";
	};
	class AttributesImage
	{
		font = "RobotoCondensed";
		color = "#E5E5E5";
		align = "left";
	};
};
class RscButtonMenuV: RscShortcutButtonV
{
	idc = -1;
	type = 16;
	style = "0x02 + 0xC0";
	default = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	colorBackground[] = {0,0,0,0.8};
	colorBackgroundFocused[] = {1,1,1,1};
	colorBackground2[] = {0.75,0.75,0.75,1};
	color[] = {1,1,1,1};
	colorFocused[] = {0,0,0,1};
	color2[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	textSecondary = "";
	colorSecondary[] = {1,1,1,1};
	colorFocusedSecondary[] = {0,0,0,1};
	color2Secondary[] = {0,0,0,1};
	colorDisabledSecondary[] = {1,1,1,0.25};
	sizeExSecondary = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	fontSecondary = "PuristaLight";
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	class TextPos
	{
		left = "0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		top = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0.0;
	};
	class Attributes
	{
		font = "PuristaLight";
		color = "#E5E5E5";
		align = "left";
		shadow = "false";
	};
	class ShortcutPos
	{
		left = "5.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		top = 0;
		w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
};
class RscButtonMenuOK: RscButtonMenuV
{
	idc = 1;
	shortcuts[] = {"0x00050000 + 0",28,57,156};
	default = 1;
	text = "$STR_DISP_OK";
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenuOK\soundPush",0.09,1};
};
class RscButtonMenuCancel: RscButtonMenuV
{
	idc = 2;
	shortcuts[] = {"0x00050000 + 1"};
	text = "$STR_DISP_CANCEL";
};
class ScrollBarV
{
	color[] = {1,1,1,0.6};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.3};
	thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
	shadow = 0;
	scrollSpeed = 0.06;
	width = 0;
	height = 0;
	autoScrollEnabled = 0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
};

class RscExileNewVehicleCustomsDialog
{
	idd=24008;
	onLoad="uiNamespace setVariable ['RscExileVehicleCustomsDialog', _this select 0]";
	onUnload="call ExileClient_gui_vehicleCustomsDialog_event_onUnload; uiNamespace setVariable ['RscExileVehicleCustomsDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc=1000;
			x="0.5 * safezoneW / 40 + safezoneX";
			y="0.5 * safezoneH / 25 + safezoneY";
			w="8 * safezoneW / 40";
			h="12.75 * safezoneH / 25";
			type = 0;
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
			style = 0;
			text = "";
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		class DialogTitle: DialogBackground
		{
			idc=1001;
			text="Customize Vehicle";
			x="1 * safezoneW / 40 + safezoneX";
			y="1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="1 * safezoneH / 25";
			sizeEx="1 * safezoneH / 25";
			class Attributes
			{
				font = "PuristaMedium";
				color = "#FFFFFF";
				shadow = "false";
				align="center";
				valign="middle";
			};
		};
		class CancelBackground: DialogBackground
		{
			idc=1002;
			x="0.5 * safezoneW / 40 + safezoneX";
			y="23 * safezoneH / 25 + safezoneY";
			w="8 * safezoneW / 40";
			h="1.5 * safezoneH / 25";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
		class ControlsBackground: DialogBackground
		{
			idc=1003;
			x="0.5 * safezoneW / 40 + safezoneX";
			y="21 * safezoneH / 25 + safezoneY";
			w="8 * safezoneW / 40";
			h="1.5 * safezoneH / 25";
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
		};
	};
	class controls
	{
		class VehicleDropDown
		{
			idc=4000;
			x="1 * safezoneW / 40 + safezoneX";
			y="2.1 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.7 * safezoneH / 25";
			onLBSelChanged="_this call ExileClient_gui_vehicleCustomsDialog_event_onVehicleDropDownSelectionChanged";
			type = 4;
			style = 16;
			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
			
			colorDisabled[] = {1,1,1,0.25};
			
			colorSelect[] = {0,0,0,1};
			colorText[] = {1,1,1,1.0};
			colorBackground[] = {0,0,0,1};
			colorSelectBackground[] = {1,1,1,0.7};
			
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1.0};
			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1.0};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1.0};
			wholeHeight = 0.3;
			class ComboScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
		};
		class SkinsListBox
		{
			idc=4001;
			x="1 * safezoneW / 40 + safezoneX";
			y="2.9 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="7 * safezoneH / 25";
			onLBSelChanged="_this call ExileClient_gui_vehicleCustomsDialog_event_onSkinListBoxSelectionChanged";
			font="RobotoCondensed";
			colorSelect[]={0,0,0,1};
			colorPictureRightSelected[]={1,1,1,1};
			soundSelect[]=
			{
				"\A3\ui_f\data\sound\RscListbox\soundSelect",
				0.090000004,
				1
			};
			class ListScrollBar
			{
				color[]={1,1,1,1};
				autoScrollEnabled=1;
				colorActive[]={1,1,1,1};
				colorDisabled[]={1,1,1,0.30000001};
				thumb="\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowEmpty="\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				arrowFull="\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				border="\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				shadow=0;
				scrollSpeed=0.059999999;
				width=0;
				height=0;
				autoScrollSpeed=-1;
				autoScrollDelay=5;
				autoScrollRewind=0;
			};
			sizeEx="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx2="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			rowHeight="2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			canDrag=0;
			itemSpacing=0.001;
			period=1.2;
			shadow=0;
			maxHistoryDelay=1;
			fade=0;
			deletable=0;
			type=5;
			style=16;
			colorDisabled[]={1,1,1,0.25};
			colorPicture[]={1,1,1,1};
			colorPictureDisabled[]={1,1,1,0.25};
			colorPictureRight[]={1,1,1,1};
			colorPictureRightDisabled[]={1,1,1,0.25};
			colorPictureSelected[]={1,1,1,1};
			colorScrollbar[]={1,0,0,0};
			colorSelect2[]={0,0,0,1};
			colorSelect2Right[]={0,0,0,1};
			colorSelectBackground2[]={1,1,1,0.5};
			colorSelectBackground[]={0.94999999,0.94999999,0.94999999,1};
			colorSelectRight[]={0,0,0,1};
			colorShadow[]={0,0,0,0.5};
			colorText[]={1,1,1,1};
			colorTextRight[]={1,1,1,1};
			disabledCtrlColor[]={1,1,1,0.5};
			itemBackground[]={1,1,1,0.1};
			tooltipColorBox[]={1,1,1,1};
			tooltipColorShade[]={0,0,0,0.64999998};
			tooltipColorText[]={1,1,1,1};
			colorBackground[]={1,1,1,0.1};
		};
		class ButtonPurchase: RscButtonMenuOK
		{
			idc=4002;
			text="Purchase Skin";
			x="1 * safezoneW / 40 + safezoneX";
			y="10.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="1 * safezoneH / 25";
			sizeEx="0.75 * safezoneH / 25";
			onMouseButtonClick="_this call ExileClient_gui_vehicleCustomsDialog_event_onPurchaseButtonClick";
			textureNoShortcut = "#(argb,8,8,3)color(1,1,1,0)";
			class Attributes
			{
				font = "PuristaLight";
				color = "#E5E5E5";
				shadow = "false";
				align="center";
				valign="middle";
			};
		};
		class ButtonPurchase2: RscButtonMenuOK
		{
			idc=4005;
			text="Purchase Mods";
			x="1 * safezoneW / 40 + safezoneX";
			y="11.75 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="1 * safezoneH / 25";
			sizeEx="0.75 * safezoneH / 25";
			onMouseButtonClick="_this call ExileClient_gui_vehicleCustomsDialog_event_onPurchaseModsButtonClick";
			textureNoShortcut = "#(argb,8,8,3)color(1,1,1,0)";
			class Attributes
			{
				font = "PuristaLight";
				color = "#E5E5E5";
				shadow = "false";
				align="center";
				valign="middle";
			};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc=4003;
			x="1 * safezoneW / 40 + safezoneX";
			y="23.5 * safezoneH / 25 + safezoneY";
			w="7 * safezoneW / 40";
			h="0.5 * safezoneH / 25";
			action="closeDialog 0";
			textureNoShortcut = "#(argb,8,8,3)color(1,1,1,0)";
			class Attributes
			{
				font = "PuristaLight";
				color = "#E5E5E5";
				shadow = "false";
				align="center";
			};
		};
		
		class ClearModsButton: RscButtonMenuOK
		{
			idc=4006;
			text="Clear Mods";
			tooltip = "Removes all recent mod changes";
			x="5 * safezoneW / 40 + safezoneX";
			y="21.125 * safezoneH / 25 + safezoneY";
			w="3 * safezoneW / 40";
			h="0.5 * safezoneH / 25";
			sizeEx="0.75 * safezoneH / 25";
			onMouseButtonClick="_this call ExileClient_gui_vehicleCustomsDialog_event_onClearModsButtonClick";
			textureNoShortcut = "#(argb,8,8,3)color(1,1,1,0)";
			class Attributes
			{
				font = "PuristaLight";
				color = "#E5E5E5";
				shadow = "false";
				align="center";
				valign="middle";
			};
		};
		
		class ClearSkinsButton: RscButtonMenuOK
		{
			idc=4007;
			text="Clear Skins";
			tooltip = "Removes all recent skin changes";
			x="5 * safezoneW / 40 + safezoneX";
			y="21.875 * safezoneH / 25 + safezoneY";
			w="3 * safezoneW / 40";
			h="0.5 * safezoneH / 25";
			sizeEx="0.75 * safezoneH / 25";
			onMouseButtonClick="_this call ExileClient_gui_vehicleCustomsDialog_event_onClearSkinsButtonClick";
			textureNoShortcut = "#(argb,8,8,3)color(1,1,1,0)";
			class Attributes
			{
				font = "PuristaLight";
				color = "#E5E5E5";
				shadow = "false";
				align="center";
				valign="middle";
			};
		};
		
		class ButtonLeft 
		{
			type = 11;
			idc = 4010;
			colorBackground[]={0.050000001,0.050000001,0.050000001,0.69999999};
			style = 48;
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			//sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			sizeEx="0.75 * safezoneH / 25";
			x="0.5 * safezoneW / 40 + safezoneX";
			y="21 * safezoneH / 25 + safezoneY";
			w="1.5 * safezoneW / 40";
			h="1.5 * safezoneH / 25";
			shadow = 2;
			show = 1;
			url = "";
			colorDisabled[] = {1,1,1,0.25};
			tooltipColorText[] = {1,1,1,1};
			tooltipColorBox[] = {1,1,1,1};
			tooltipColorShade[] = {0,0,0,0.65};
			color[] = {1,1,1,0.7};
			colorActive[] = {1,1,1,1};
			tooltip = "Camera Left";
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			text="custom\vehicleCustoms\textures\arrow_left_ca.paa";
			onMouseButtonClick = "_this call ExileClient_gui_vehicleCustomsDialog_event_camera_move_left";
		};
		
		class ButtonRight: ButtonLeft
		{
			idc=4011;
			x="2.5 * safezoneW / 40 + safezoneX";
			y="21 * safezoneH / 25 + safezoneY";
			w="1.5 * safezoneW / 40";
			h="1.5 * safezoneH / 25";
			text="custom\vehicleCustoms\textures\arrow_right_ca.paa";
			tooltip = "Camera Right";
			onMouseButtonClick = "_this call ExileClient_gui_vehicleCustomsDialog_event_camera_move_right";
		};
		
		class ButtonUp: ButtonLeft
		{
			idc=4012;
			x="1.5 * safezoneW / 40 + safezoneX";
			y="20.625 * safezoneH / 25 + safezoneY";
			w="1.5 * safezoneW / 40";
			h="1.5 * safezoneH / 25";
			text="custom\vehicleCustoms\textures\arrow_up_ca.paa";
			tooltip = "Camera Up";
			onMouseButtonClick = "_this call ExileClient_gui_vehicleCustomsDialog_event_camera_move_up";
		};
		
		class ButtonDown: ButtonLeft
		{
			idc=4013;
			x="1.5 * safezoneW / 40 + safezoneX";
			y="21.375 * safezoneH / 25 + safezoneY";
			w="1.5 * safezoneW / 40";
			h="1.5 * safezoneH / 25";
			text="custom\vehicleCustoms\textures\arrow_down_ca.paa";
			tooltip = "Camera Down";
			onMouseButtonClick = "_this call ExileClient_gui_vehicleCustomsDialog_event_camera_move_down";
		};
		
		class ZoomOut: ButtonLeft
		{
			idc=4014;
			x="3.875 * safezoneW / 40 + safezoneX";
			y="21.5 * safezoneH / 25 + safezoneY";
			w="1 * safezoneW / 40";
			h="1 * safezoneH / 25";
			text="a3\ui_f\data\GUI\Rsc\RscDisplayMultiplayer\arrow_down_ca.paa";
			tooltip = "Zoom Out";
			onMouseButtonClick = "_this call ExileClient_gui_vehicleCustomsDialog_event_camera_zoom_out";
		};
		class ZoomIn: ZoomOut
		{
			idc=4015;
			x="3.875 * safezoneW / 40 + safezoneX";
			y="21 * safezoneH / 25 + safezoneY";
			w="1 * safezoneW / 40";
			h="1 * safezoneH / 25";
			text="a3\ui_f\data\GUI\Rsc\RscDisplayMultiplayer\arrow_up_ca.paa";
			tooltip = "Zoom In";
			onMouseButtonClick = "_this call ExileClient_gui_vehicleCustomsDialog_event_camera_zoom_in";
		};
	};
};
