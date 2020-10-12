 /*
 *
 * Author: Andrew_S90
 *
 * This work is protected by Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0). 
 *
 */
 
private["_responseCode", "_salesPrice"];
_responseCode = _this select 0;
_salesPrice = _this select 1;
if (_responseCode isEqualTo 0) then
{
	["SuccessTitleAndText", ["Vehicle Mod purchased!", format ["-%1<img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='24'/>", _salesPrice]]] call ExileClient_gui_toaster_addTemplateToast;
}
else 
{
	systemChat format["Failed to purchase vehicle Mod: %1", _responseCode];
};