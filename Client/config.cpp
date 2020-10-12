class CfgNetworkMessages
{
	class purchaseVehicleModsResponse
	{
		module="system_trading";
		parameters[]=
		{
			"SCALAR",
			"SCALAR"
		};
	};

	class purchaseVehicleModsRequest 
	{
		module="system_trading";
		parameters[]=
		{
			"STRING",
			"ARRAY",
			"ARRAY"
		};
	};
};	

//*********

class CfgExileCustomCode 
{
	/*
		You can overwrite every single file of our code without touching it.
		To do that, add the function name you want to overwrite plus the 
		path to your custom file here. If you wonder how this works, have a
		look at our bootstrap/fn_preInit.sqf function.

		Simply add the following scheme here:

		<Function Name of Exile> = "<New File Name>";

		Example:

		ExileClient_util_fusRoDah = "myaddon\myfunction.sqf";
	*/
	
	//VehicleCustoms
	ExileClient_gui_vehicleCustomsDialog_event_onSkinListBoxSelectionChanged = "customcode\client\ExileClient_gui_vehicleCustomsDialog_event_onSkinListBoxSelectionChanged.sqf";
	ExileClient_gui_vehicleCustomsDialog_event_onUnload = "customcode\client\ExileClient_gui_vehicleCustomsDialog_event_onUnload.sqf";
	ExileClient_gui_vehicleCustomsDialog_event_onVehicleDropDownSelectionChanged = "customcode\client\ExileClient_gui_vehicleCustomsDialog_event_onVehicleDropDownSelectionChanged.sqf";
	ExileClient_gui_vehicleCustomsDialog_show = "customcode\client\ExileClient_gui_vehicleCustomsDialog_show.sqf";
	ExileClient_gui_vehicleCustomsDialog_updateVehicle = "customcode\client\ExileClient_gui_vehicleCustomsDialog_updateVehicle.sqf";
	ExileServer_object_vehicle_database_insert = "customcode\server\ExileServer_object_vehicle_database_insert.sqf";
	ExileServer_object_vehicle_database_load = "customcode\server\ExileServer_object_vehicle_database_load.sqf";
	ExileServer_system_trading_network_purchaseVehicleSkinRequest = "customcode\server\ExileServer_system_trading_network_purchaseVehicleSkinRequest.sqf";
};

//*********

class CfgVehicleCustomsMaster
{
	skins[] =
	{
		{5000,"Anime",{"custom\VehicleCustoms\textures\anime.paa"}},
		{5000,"FullBlack",{"custom\VehicleCustoms\textures\black.paa"}},
		{5000,"FullBlue",{"custom\VehicleCustoms\textures\Blue.paa"}},
		{5000,"BlueBubble",{"custom\VehicleCustoms\textures\Blue_Bubble.paa"}},
		{5000,"Brit",{"custom\VehicleCustoms\textures\brit.paa"}},
		{5000,"FullBrown",{"custom\VehicleCustoms\textures\Brown.paa"}},
		{5000,"Circuit",{"custom\VehicleCustoms\textures\Circuit.paa"}},
		{5000,"DarkGreen",{"custom\VehicleCustoms\textures\DarkGreen.paa"}},
		{5000,"Diamonds",{"custom\VehicleCustoms\textures\Diamonds.paa"}},
		{5000,"DigiCamo",{"custom\VehicleCustoms\textures\digi_camo.paa"}},
		{5000,"Dragon",{"custom\VehicleCustoms\textures\Dragon.paa"}},
		{5000,"FullGray",{"custom\VehicleCustoms\textures\Gray.paa"}},
		{5000,"FullGreen",{"custom\VehicleCustoms\textures\Green.paa"}},
		{5000,"Hex",{"custom\VehicleCustoms\textures\hex.paa"}},
		{5000,"Rainbow",{"custom\VehicleCustoms\textures\multi.paa"}},
		{5000,"FullOrange",{"custom\VehicleCustoms\textures\Orange.paa"}},
		{5000,"FullPink",{"custom\VehicleCustoms\textures\Pink.paa"}},
		{5000,"FullPurple",{"custom\VehicleCustoms\textures\Purple.paa"}},
		{5000,"RainbowGlow",{"custom\VehicleCustoms\textures\Rainbow_Glow.paa"}},
		{5000,"FullRed",{"custom\VehicleCustoms\textures\Red.paa"}},
		{5000,"RobotBubbleGum",{"custom\VehicleCustoms\textures\robotbubblegum.paa"}},
		{5000,"Scalie",{"custom\VehicleCustoms\textures\scalie_bomb.paa"}},
		{5000,"Spongebob",{"custom\VehicleCustoms\textures\sponge.paa"}},
		{5000,"Space",{"custom\VehicleCustoms\textures\stars.paa"}},
		{5000,"StickerBomb",{"custom\VehicleCustoms\textures\sticker.paa"}},
		{5000,"Weeb",{"custom\VehicleCustoms\textures\weebgirl.paa"}},
		{5000,"FullWhite",{"custom\vehicleCustoms\textures\White.paa"}}
	};
};

class CfgVehicleCustoms
{
	#include "custom\VehicleCustoms\CfgVehicleCustoms.cpp"
};