params ["_control", "_button", "_xPos", "_yPos", "_shift", "_ctrl", "_alt"];
private _index = lbCurSel _control;
private _animName = _control lbData _index; 

private _init = ExileClientVehicleCustomsOriginalVehicle animationPhase _animName;
if (_init isEqualTo 0) then 
{
	ExileClientVehicleCustomsOriginalVehicle animate [_animName,1,true];
}
else
{
	ExileClientVehicleCustomsOriginalVehicle animate [_animName,0,true];
};

