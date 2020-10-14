/*

Can be used in MP (outputs to local rpt)
Or editor
Used to preview a single vehicle animations and export for vehicle customs



*/




if(isNil 'VehiclePreview') then 
{
	VehiclePreview = true;
	VehicleInformation = [];
};

if(VehiclePreview)then
{
	private _vehicle = (vehicle player);
	if !(_vehicle isEqualTo player) then 
	{
		systemChat "What can Los Santos Customs do for you today?";
		private _vehicleCustomList = (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AnimationSources") call Bis_fnc_getCfgSubClasses;
		
		['SuccessTitleAndText', [ format["<t color='#0000ff'>Vehicle Details:</t><br/>
		Vehicle Name: %1<br/>
		Animation Count: %2<br/>
		",(typeOf _vehicle),count _vehicleCustomList] ]] call ExileClient_gui_toaster_addTemplateToast;
		
		if(count _vehicleCustomList > 0) then
		{
			[_vehicle,_vehicleCustomList] spawn 
			{
				private _vehicle = _this select 0;
				private _vehicleCustomList = _this select 1;
				disableSerialization;
				systemChat "Alright Alright Alright! We got some work to do!";
				private _result = ["Do you want to start previewing animations?", "Preview?", "Yea", "No Way"] call BIS_fnc_guiMessage;
				waitUntil { !isNil "_result" };
				if (_result) then
				{
					systemChat "You are gonna have one sweet ride";
					{
						[format["%1",_x]] spawn ExileClient_gui_baguette_show;
						private _voices = ["What's wrong with her now?","You got some beef with the Ballas or something?","Stops on a dime. Seriously.","That's a hell of a ride.","These tires are hardcore!","","They use this stuff on armored cars you know!","","Did you need something or are you just being a dick?","",""];
						systemChat (selectRandom _voices);
						private _init = _vehicle animationSourcePhase _x;
						_vehicle animateSource [_x,1];
						uiSleep 1;
						_vehicle animateSource [_x,0];
						uiSleep 0.5;
						_vehicle animateSource [_x,1];
						uiSleep 1;
						_vehicle animateSource [_x,0];
						uiSleep 0.5;
						_vehicle animateSource [_x,1];
						uiSleep 1;
						_vehicle animateSource [_x,0];
						uiSleep 0.5;
						_vehicle animateSource [_x,1];
						uiSleep 1;
						_vehicle animateSource [_x,0];
						uiSleep 0.5;
						_vehicle animateSource [_x,1];
						uiSleep 1;
						_vehicle animateSource [_x,0];
						uiSleep 0.5;
						_vehicle animateSource [_x,1];
						uiSleep 1;
						_vehicle animateSource [_x,0];
						uiSleep 0.5;
						_vehicle animateSource [_x,_init];
						private _result = ["Do you want to save this for customization?", "Preview?", "Yea", "Nah"] call BIS_fnc_guiMessage;
						waitUntil { !isNil "_result" };
						if (_result) then
						{
							VehicleInformation pushBack _x;
						}
						else
						{
							private _result = ["Do you want to see it again?", "Preview?", "Yea", "Nah"] call BIS_fnc_guiMessage;
							waitUntil { !isNil "_result" };
							if (_result) then
							{
								systemchat "Alright.. One more shot.";
								private _init = _vehicle animationSourcePhase _x;
								_vehicle animateSource [_x,1];
								uiSleep 1;
								_vehicle animateSource [_x,0];
								uiSleep 0.5;
								_vehicle animateSource [_x,1];
								uiSleep 1;
								_vehicle animateSource [_x,0];
								uiSleep 0.5;
								_vehicle animateSource [_x,1];
								uiSleep 1;
								_vehicle animateSource [_x,0];
								uiSleep 0.5;
								_vehicle animateSource [_x,1];
								uiSleep 1;
								_vehicle animateSource [_x,0];
								uiSleep 0.5;
								_vehicle animateSource [_x,1];
								uiSleep 1;
								_vehicle animateSource [_x,0];
								uiSleep 0.5;
								_vehicle animateSource [_x,1];
								uiSleep 1;
								_vehicle animateSource [_x,0];
								uiSleep 0.5;
								_vehicle animateSource [_x,_init];
								private _result = ["Do you want to save this for customization?", "Preview?", "Yea", "Nah"] call BIS_fnc_guiMessage;
								waitUntil { !isNil "_result" };
								if (_result) then
								{
									VehicleInformation pushBack _x;
								}
								else
								{
									systemchat "Are you playing jokes on me?";
								};
							}
							else
							{
								systemchat "On to the next thing";
							};
						};
					}
					forEach _vehicleCustomList;
					diag_log (str VehicleInformation);
					copyToClipboard VehicleInformation;
					systemChat "Good to go hombre!";
				}
				else
				{
					systemChat "Sorry Shop is Closed";
				};
			};
		}
		else
		{
			systemChat "Shit homie, you are all good to go!";
		};
	}
	else
	{
		systemChat "Bring a vehicle, I can't fix your ugly!";
	};
	VehiclePreview = true;
	VehicleInformation = [];
};