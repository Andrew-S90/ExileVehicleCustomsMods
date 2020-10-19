/**
 * ExileClient_gui_vehicleCustomsDialog_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_traderObject", "_localVehicles", "_nearVehicles", "_customizableVehicles", "_parentClassName", "_dialog", "_vehicleDropDown", "_vehicleObject", "_vehicleIndex"];
disableSerialization;
_traderObject = _this;
_localVehicles = [];
_nearVehicles = [];
ExileClientVehicleCustomsNotChanged = true;
switch (typeOf _traderObject) do
{
	case "Exile_Trader_VehicleCustoms":
	{
		_nearVehicles = nearestObjects [player, ["LandVehicle"], 50];
	};
	case "Exile_Trader_AircraftCustoms":
	{
		_nearVehicles = nearestObjects [player, ["Air"], 80];
	};
	case "Exile_Trader_BoatCustoms":
	{
		_nearVehicles = nearestObjects [player, ["Ship"], 50];
	};
	default { format["Invalid trader type: %1", (typeOf _traderObject)] call ExileClient_util_log; };
};
_customizableVehicles = [];
{
	if (local _x) then
	{
		if (alive _x) then
		{
			_localVehicles pushBack _x;
		};
	};
}
forEach _nearVehicles;
if (_localVehicles isEqualTo []) exitWith
{
	["ErrorTitleAndText", ["Whoops!", "Park within 50m and get in as driver first."]] call ExileClient_gui_toaster_addTemplateToast;
};
{
	_customizableVehicles pushBackUnique _x;
}
forEach _localVehicles;
if (_customizableVehicles isEqualTo []) exitWith
{
	["ErrorTitleAndText", ["Whoops!", "None of your vehicles can be customized."]] call ExileClient_gui_toaster_addTemplateToast;
};
createDialog "RscExileNewVehicleCustomsDialog";
_dialog = uiNameSpace getVariable ["RscExileVehicleCustomsDialog", displayNull];
uiNamespace setVariable["ExileCurrentTrader", _traderObject];
false call ExileClient_gui_hud_toggle;
[] spawn ExileClient_gui_vehicleCustomsDialog_event_camera_create;
_vehicleDropDown = _dialog displayCtrl 4000;
lbClear _vehicleDropDown;
{
	_vehicleObject = _x;
	_vehicleIndex = _vehicleDropDown lbAdd getText(configFile >> "CfgVehicles" >> (typeOf _vehicleObject) >> "displayName");
	_vehicleDropDown lbSetData [_vehicleIndex, netId _vehicleObject];
}
forEach _customizableVehicles;
_vehicleSkinListBox = _dialog displayCtrl 4001;
_vehicleSkinListBox ctrlSetEventHandler ["MouseButtonDblClick", "_this call ExileClient_gui_vehicleCustomsDialog_event_onSkinListBoxMouseDoubleClick"];
(_customizableVehicles select 0) call ExileClient_gui_vehicleCustomsDialog_updateVehicle;
_vehicleDropDown lbSetCurSel 0;