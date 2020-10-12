
{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;

    _code = compileFinal (preprocessFileLineNumbers _file);

    missionNamespace setVariable [_function, _code];
}
forEach
[
	['ExileClient_gui_vehicleCustomsDialog_event_camera_create', 'custom\vehicleCustoms\ExileClient_gui_vehicleCustomsDialog_event_camera_create.sqf'],
	['ExileClient_gui_vehicleCustomsDialog_event_camera_destroy', 'custom\vehicleCustoms\ExileClient_gui_vehicleCustomsDialog_event_camera_destroy.sqf'],
	['ExileClient_gui_vehicleCustomsDialog_event_camera_move', 'custom\vehicleCustoms\ExileClient_gui_vehicleCustomsDialog_event_camera_move.sqf'],
	['ExileClient_gui_vehicleCustomsDialog_event_camera_move_down', 'custom\vehicleCustoms\ExileClient_gui_vehicleCustomsDialog_event_camera_move_down.sqf'],
	['ExileClient_gui_vehicleCustomsDialog_event_camera_move_left', 'custom\vehicleCustoms\ExileClient_gui_vehicleCustomsDialog_event_camera_move_left.sqf'],
	['ExileClient_gui_vehicleCustomsDialog_event_camera_move_right', 'custom\vehicleCustoms\ExileClient_gui_vehicleCustomsDialog_event_camera_move_right.sqf'],
	['ExileClient_gui_vehicleCustomsDialog_event_camera_move_up', 'custom\vehicleCustoms\ExileClient_gui_vehicleCustomsDialog_event_camera_move_up.sqf'],
	['ExileClient_gui_vehicleCustomsDialog_event_camera_zoom_in', 'custom\vehicleCustoms\ExileClient_gui_vehicleCustomsDialog_event_camera_zoom_in.sqf'],
	['ExileClient_gui_vehicleCustomsDialog_event_camera_zoom_out', 'custom\vehicleCustoms\ExileClient_gui_vehicleCustomsDialog_event_camera_zoom_out.sqf'],
	['ExileClient_gui_vehicleCustomsDialog_event_onClearModsButtonClick', 'custom\vehicleCustoms\ExileClient_gui_vehicleCustomsDialog_event_onClearModsButtonClick.sqf'],
	['ExileClient_gui_vehicleCustomsDialog_event_onClearSkinsButtonClick', 'custom\vehicleCustoms\ExileClient_gui_vehicleCustomsDialog_event_onClearSkinsButtonClick.sqf'],
	['ExileClient_gui_vehicleCustomsDialog_event_onSkinListBoxMouseDoubleClick', 'custom\vehicleCustoms\ExileClient_gui_vehicleCustomsDialog_event_onSkinListBoxMouseDoubleClick.sqf'],
	['ExileClient_gui_vehicleCustomsDialog_event_onPurchaseModsButtonClick', 'custom\vehicleCustoms\ExileClient_gui_vehicleCustomsDialog_event_onPurchaseModsButtonClick.sqf'],
	['ExileClient_system_trading_network_purchaseVehicleModsResponse', 'custom\vehicleCustoms\ExileClient_system_trading_network_purchaseVehicleModsResponse.sqf']
];
