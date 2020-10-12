 /*
 *
 * Author: Andrew_S90
 *
 * This work is protected by Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0). 
 *
 */
ExileClientVehicleCustomsCamPosition = getPos ExileClientVehicleCustomsOriginalVehicle;
ExileClientVehicleCustomsCamPosition = [(ExileClientVehicleCustomsCamPosition select 0) + (cos(0)*ExileClientVehicleCustomsRadius),(ExileClientVehicleCustomsCamPosition select 1) + (sin(0)*ExileClientVehicleCustomsRadius),(ExileClientVehicleCustomsCamPosition select 2) + ExileClientVehicleCustomsPositionHeight];

ExileClientVehicleCustomsCam camSetPos ExileClientVehicleCustomsCamPosition;
ExileClientVehicleCustomsCam camPrepareTarget (getPos ExileClientVehicleCustomsOriginalVehicle); 
ExileClientVehicleCustomsCam camCommitPrepared 2; 
