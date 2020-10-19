/**
 * ExileClient_gui_vehicleCustomsDialog_event_onUnload
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
[] spawn ExileClient_gui_vehicleCustomsDialog_event_camera_destroy;
{
	ExileClientVehicleCustomsOriginalVehicle animate [(_x select 0),(_x select 1),true];
} forEach ExileClientVehicleCustomsOriginalVehicleComponents;
if (ExileClientVehicleCustomsNotChanged) then
{
	{
		ExileClientVehicleCustomsOriginalVehicle setObjectTexture [_forEachIndex, ExileClientVehicleCustomsOriginalVehicleTextures select _forEachIndex];
	} forEach ExileClientVehicleCustomsOriginalVehicleTextures;
};
true call ExileClient_gui_hud_toggle;