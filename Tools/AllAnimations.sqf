/*




Use in editor - copyToClipboard does not work in MP
Load up all mods used on your server and run this in the editor. There will be some overlaps with the default exile vehicle customs. Simply combine them.

*/


Output = "";

_cfgveh= configFile >> "cfgVehicles";
_br = toString [13,10];
_t = toString [9];
for "_i" from 0 to (count _cfgveh)-1 do
{
	_veh = _cfgveh select _i;
	if (isClass _veh) then
	{
		_vehname = configName _veh;
		
		if ((getNumber (_veh >> "scope") == 2) && (_vehname isKindOf "AllVehicles")) then
		{
			_cfg = configFile >> "cfgVehicles" >> _vehname;
			systemchat str _vehname;
			private _count = 0;
			private _info = "";
			{
				_anim = configName _x;
				_displayName = gettext (_x >> "displayName");
				if (_displayName != "" && {getnumber (_x >> "scope") > 1 || !isnumber (_x >> "scope")}) then 
				{
					_info = _info + _t + _t + "{" + str _anim + ", 1000, " + str _displayName + "}," + _br;
					_count = _count + 1;
				};
			} forEach (configproperties [_cfg >> "animationSources","isclass _x",true]);	
			if(_count > 0) then
			{
				Output = Output + "class " + _vehname + _br + "{" + _br + _t + "components[] =" + _br + _t + "{" + _br;
				Output = Output + _info + _t + "};" + _br + "};";
			};
		};
	};
};

copytoclipboard Output;
