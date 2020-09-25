
ExileClientVehicleCustomsCamPosition = getPos ExileClientVehicleCustomsOriginalVehicle;
ExileClientVehicleCustomsCamPosition = [(ExileClientVehicleCustomsCamPosition select 0) + 4.25,(ExileClientVehicleCustomsCamPosition select 1) + 4.25,(ExileClientVehicleCustomsCamPosition select 2) + 4.25];

ExileClientVehicleCustomsCam camSetPos ExileClientVehicleCustomsCamPosition;
ExileClientVehicleCustomsCam camPrepareTarget (getPos ExileClientVehicleCustomsOriginalVehicle); 
ExileClientVehicleCustomsCam camCommitPrepared 2; 

//waitUntil {camCommitted ExileClientVehicleCustomsCam};