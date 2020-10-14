# ExileVehicleCustomsMods
Allows vehicle custom mods to be purchased. Cosmetic such as RPG Cages, Camo nets. If it is available to be added (Like in the editor/Zeus) then you can set a price for the mods.
You can also combine a "Paintshop" like global skins for this as well with the CfgVehicleCustomsMaster


If you trade for items they will be gone and save for that restart so the stock there is what you get.

Showcase video: https://www.youtube.com/watch?v=5r584qykIiM

This was developed on a test server with EXTDB2, no infistar and no battleye.

Your exile.mapname (mission) must be pbo'd for this to work until arma updates next!

# Install Instructions:

### Client

**config.cpp**

Paste the contents into the top of your config file. Modify existing network message section if needed.
Add the Server and Client Overrides to CfgExileCustomCode

Remove/Comment out the CfgVehicleCustoms and replace with the provided code and CfgVehicleCustomsMaster

**description.ext**

Paste the contents anywhere after `#include "RscDefines.hpp"` appears in your description.ext file

**initplayerlocal.sqf**

After `if (!hasInterface || isServer) exitWith {};` paste the upper contents of initplayerlocal.sqf found in the Client folder

If you are having trouble please view the example mission included.

### Server

**Code**

Pbo the server folder and place inside your servermod folder (such as @ExileServer)
Overrides are found in the mission file

**SQL**

There is a column to be added to vehicles table that is needed for this to function properly. Please execute the SQL on your Exile database

**Exile.ini**

insertVehicle and loadVehicle need to be changed with the provided settings in the exile.ini top portion
Paste the contents at the bottom of your exile.ini **MODIFY** if using extdb3


For support feel free to post in Exile Discord #support channel: https://discord.gg/cmMMHyJ

Unless something is broken or missing in this initial release I will not provide support or installation help, you are free to use this release as you wish.

Thank you!
