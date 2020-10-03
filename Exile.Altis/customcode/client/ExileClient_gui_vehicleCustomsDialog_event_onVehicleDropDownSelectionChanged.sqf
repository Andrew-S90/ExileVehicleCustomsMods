/**
 * ExileClient_gui_vehicleCustomsDialog_event_onVehicleDropDownSelectionChanged
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_comboBox", "_index", "_vehicleObject"];
disableSerialization;
_comboBox = _this select 0;
_index = _this select 1;
_vehicleObject = objectFromNetId (_comboBox lbData _index);
{
	ExileClientVehicleCustomsOriginalVehicle setObjectTexture [_forEachIndex, ExileClientVehicleCustomsOriginalVehicleTextures select _forEachIndex];
} forEach ExileClientVehicleCustomsOriginalVehicleTextures;

//hide anims
{
	ExileClientVehicleCustomsOriginalVehicle animate [(_x select 0),(_x select 1),true];
} forEach ExileClientVehicleCustomsOriginalVehicleComponents;

_vehicleObject call ExileClient_gui_vehicleCustomsDialog_updateVehicle;
[] spawn ExileClient_gui_vehicleCustomsDialog_event_camera_move;
true