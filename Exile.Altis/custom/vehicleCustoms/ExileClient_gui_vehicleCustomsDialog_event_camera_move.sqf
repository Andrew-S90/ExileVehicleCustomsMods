
ExileClientVehicleCustomsCamPosition = getPos ExileClientVehicleCustomsOriginalVehicle;
ExileClientVehicleCustomsCamPosition = [(ExileClientVehicleCustomsCamPosition select 0) + (cos(0)*ExileClientVehicleCustomsRadius),(ExileClientVehicleCustomsCamPosition select 1) + (sin(0)*ExileClientVehicleCustomsRadius),(ExileClientVehicleCustomsCamPosition select 2) + ExileClientVehicleCustomsPositionHeight];

ExileClientVehicleCustomsCam camSetPos ExileClientVehicleCustomsCamPosition;
ExileClientVehicleCustomsCam camPrepareTarget (getPos ExileClientVehicleCustomsOriginalVehicle); 
ExileClientVehicleCustomsCam camCommitPrepared 2; 

//waitUntil {camCommitted ExileClientVehicleCustomsCam};