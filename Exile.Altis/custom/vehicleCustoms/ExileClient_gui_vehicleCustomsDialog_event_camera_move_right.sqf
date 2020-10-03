private ["_vehiclePosX", "_vehiclePosY", "_cameraPosX", "_cameraPosY"];

if(ExileClientVehicleCustomsPosition3 >= 1) then
{
	ExileClientVehicleCustomsPosition3 = ExileClientVehicleCustomsPosition3 - 1;
}
else
{
	systemchat "Camera Height Too Low!";
};

ExileClientVehicleCustomsAngle = ExileClientVehicleCustomsAngle + 45;
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