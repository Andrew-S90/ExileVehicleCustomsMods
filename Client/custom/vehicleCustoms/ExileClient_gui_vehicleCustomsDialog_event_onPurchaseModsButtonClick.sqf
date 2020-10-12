 /*
 *
 * Author: Andrew_S90
 *
 * This work is protected by Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0). 
 *
 */

private ["_parentClassName", "_vehicleCustomsConfig", "_availableMods", "_remove", "_purchase", "_vehicleAnims", "_total", "_animCfg", "_current", "_originalAnim", "_result"];
 
_parentClassName = configName (inheritsFrom (configFile >> "CfgVehicles" >> ExileClientVehicleCustomsOriginalClass));
_vehicleCustomsConfig = (missionConfigFile >> "CfgVehicleCustoms" >> _parentClassName);
_availableMods = getArray(missionConfigFile >> "CfgVehicleCustoms" >> ExileClientVehicleCustomsOriginalClass >> "components");
_remove = true;
_purchase = [];
_vehicleAnims = [];
_total = 0;
{
	_animCfg = _x;
	_current = ExileClientVehicleCustomsOriginalVehicle animationPhase (_animCfg select 0);
	_vehicleAnims pushBack [(_animCfg select 0),_current];
	{
		_originalAnim = _x;
		if((_animCfg select 0) isEqualTo (_originalAnim select 0)) then
		{
			if !(_current isEqualTo (_originalAnim select 1)) then
			{
				_purchase pushBack _animCfg;
			};
		};
	} forEach ExileClientVehicleCustomsOriginalVehicleComponents;
}
forEach _availableMods;
{
	_total = _total + (_x select 1);
} forEach _purchase;

if (_total > (player getVariable ["ExileMoney", 0])) then
{
	systemchat "Not enough Money? Who are you trying to scam..";
}
else
{
	if (_remove) then
	{
		[_purchase,_vehicleAnims] spawn
		{
			private _purchase = _this select 0;
			private _vehicleAnims = _this select 1;
			private _result = ["If you are trying to remove mods you will be charged for their removal. Purchase anyway?", "Vehicle Customs Warning!", "Yes", "No"] call BIS_fnc_guiMessage;
			waitUntil { !isNil "_result" };
			if (_result) then
			{
				["purchaseVehicleModsRequest", [netId ExileClientVehicleCustomsOriginalVehicle, _purchase,_vehicleAnims]] call ExileClient_system_network_send;
				{
					ExileClientVehicleCustomsOriginalVehicle setObjectTexture [_forEachIndex, ExileClientVehicleCustomsOriginalVehicleTextures select _forEachIndex];
				} forEach ExileClientVehicleCustomsOriginalVehicleTextures;
				closeDialog 0;
			};
		};
	}
	else
	{	
		["purchaseVehicleModsRequest", [netId ExileClientVehicleCustomsOriginalVehicle, _purchase,_vehicleAnims]] call ExileClient_system_network_send;
		{
			ExileClientVehicleCustomsOriginalVehicle setObjectTexture [_forEachIndex, ExileClientVehicleCustomsOriginalVehicleTextures select _forEachIndex];
		} forEach ExileClientVehicleCustomsOriginalVehicleTextures;
		closeDialog 0;
	}; 
};