private ["_vehiclePosX", "_vehiclePosY", "_cameraPosX", "_cameraPosY"];

if(ExileClientVehicleCustomsPositionHeight >= 1) then
{
	ExileClientVehicleCustomsPositionHeight = ExileClientVehicleCustomsPositionHeight - 1;
}
else
{
	systemchat "Camera Height Too Low!";
};

ExileClientVehicleCustomsCamPosition = getPos ExileClientVehicleCustomsOriginalVehicle;
_vehiclePosX = (ExileClientVehicleCustomsCamPosition select 0);
_vehiclePosY = (ExileClientVehicleCustomsCamPosition select 1);
_cameraPosX = _vehiclePosX + cos(ExileClientVehicleCustomsAngle)*ExileClientVehicleCustomsRadius;
_cameraPosY = _vehiclePosY + sin(ExileClientVehicleCustomsAngle)*ExileClientVehicleCustomsRadius;

ExileClientVehicleCustomsCamPosition = [_cameraPosX,_cameraPosY,(ExileClientVehicleCustomsCamPosition select 2) + ExileClientVehicleCustomsPositionHeight];

ExileClientVehicleCustomsCam camSetPos ExileClientVehicleCustomsCamPosition;
ExileClientVehicleCustomsCam camPrepareTarget (getPos ExileClientVehicleCustomsOriginalVehicle); 
ExileClientVehicleCustomsCam camCommitPrepared 2; 

//waitUntil {camCommitted ExileClientVehicleCustomsCam};