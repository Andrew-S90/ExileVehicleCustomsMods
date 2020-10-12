 /*
 *
 * Author: Andrew_S90
 *
 * This work is protected by Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0). 
 *
 */
 
private["_sessionID", "_parameters", "_vehicleNetID", "_skinTextures", "_playerObject", "_vehicleObject", "_vehicleParentClass", "_salesPrice", "_skinVariations", "_availableSkinTexture", "_playerMoney", "_skinMaterials", "_skinClassName", "_vehicleID", "_logging", "_traderLog", "_responseCode"];
_sessionID = _this select 0;
_parameters = _this select 1;
_vehicleNetID = _parameters select 0;
_purchaseData = _parameters select 1;
_vehicleAnims = _parameters select 2;
try 
{
	_playerObject = _sessionID call ExileServer_system_session_getPlayerObject;
	if (isNull _playerObject) then
	{
		throw 1;
	};
	if !(alive _playerObject) then
	{
		throw 2;
	};
	if(_playerObject getVariable ["ExileMutex",false]) then
	{
		throw 12;
	};
	_playerObject setVariable ["ExileMutex",true];
	_vehicleObject = objectFromNetId _vehicleNetID;
	if (isNull _vehicleObject) then
	{
		throw 6;
	};
	_vehicleParentClass = configName (inheritsFrom (configFile >> "CfgVehicles" >> (typeOf _vehicleObject)));
	if !((isClass (missionConfigFile >> "CfgVehicleCustoms" >> _vehicleParentClass)) || (isClass (missionConfigFile >> "CfgVehicleCustoms" >> (typeOf _vehicleObject))) ) then
	{
		throw 7;
	};
	_salesPrice = 0;
	{
		_salesPrice = _salesPrice + (_x select 1);
	} forEach _purchaseData;

	if (_salesPrice <= 0) then
	{
		throw 4;
	};
	_playerMoney = _playerObject getVariable ["ExileMoney", 0];
	if (_playerMoney < _salesPrice) then
	{
		throw 5;
	};
	private _animate = _vehicleObject getVariable ["ExileAnimate", []];
	_vehicleObject setVariable ["ExileAnimate", _vehicleAnims];
	
	_vehicleID = _vehicleObject getVariable ["ExileDatabaseID", -1];
	format["updateVehicleMods:%1:%2", _vehicleAnims, _vehicleID] call ExileServer_system_database_query_fireAndForget;
	_playerMoney = _playerMoney - _salesPrice;
	_playerObject setVariable ["ExileMoney", _playerMoney, true];
	format["setPlayerMoney:%1:%2", _playerMoney, _playerObject getVariable ["ExileDatabaseID", 0]] call ExileServer_system_database_query_fireAndForget;
	[_sessionID, "purchaseVehicleModsResponse", [0, _salesPrice]] call ExileServer_system_network_send_to;
	_logging = getNumber(configFile >> "CfgSettings" >> "Logging" >> "traderLogging");
	if (_logging isEqualTo 1) then
	{
		_traderLog = format ["PLAYER: ( %1 ) %2 PURCHASED VEHICLE MOD %3 (%4) FOR %5 POPTABS | PLAYER TOTAL MONEY: %6",getPlayerUID _playerObject,_playerObject,_vehicleAnims,_vehicleParentClass,_salesPrice,_playerMoney];
		"extDB2" callExtension format["1:TRADING:%1",_traderLog];
	};
	if(count _vehicleAnims > 0) then
	{
		{
			_vehicleObject animate _x;
		} forEach _vehicleAnims;
	};
}
catch 
{
	_responseCode = _exception;
	[_sessionID, "purchaseVehicleModsResponse", [_responseCode, 0]] call ExileServer_system_network_send_to;
};
if !(isNull _playerObject) then 
{
	_playerObject setVariable ["ExileMutex", false];
};
true