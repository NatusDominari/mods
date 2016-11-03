class CfgPatches
 {
 	class nd_client
 	{
 		units[] = {};
 		weapons[] = {};
 		requiredVersion = 1.64;
 		requiredAddons[] = {};
 	};
 };

class CfgMods
{
	class NDClient
	{
		dir="@ndClient";
		name="Natus Dominari Client Addons";
		picture="nd\client\logo.paa";
		hidePicture="true";
		hideName="true";
		actionName="Website";
		action="http://natusdominari.enjin.com";
	};
};

class CfgSounds
{
	sounds[] = {};

	class SpawnBlufor
	{
		name = "";
		// filename, volume, pitch
		sound[] = {"\nd\client\sounds\spawn_blufor.ogg", 0.5, 1};
		titles[] = {0,""};
	};

	class SpawnOpfor
	{
		name = "";
		// filename, volume, pitch
		sound[] = {"\nd\client\sounds\spawn_opfor.ogg", 0.5, 1};
		titles[] = {0,""};
	};

	class Suspense
	{
		name = "";
		// filename, volume, pitch
		sound[] = {"\nd\client\sounds\suspense.ogg", 0.5, 1};
		titles[] = {0,""};
	};

	class BluforWins
	{
		name = "";
		// filename, volume, pitch
		sound[] = {"\nd\client\sounds\blufor_wins.ogg", 1, 1};
		titles[] = {0,""};
	};

	class OpforWins
	{
		name = "";
		// filename, volume, pitch
		sound[] = {"\nd\client\sounds\opfor_wins.ogg", 1, 1};
		titles[] = {0,""};
	};
};

class CfgMusic
{
    tracks[]={BHDMainTheme};

	class BHDMainTheme
	{
		name = "";
		sound[] = {"\nd\client\music\bhd_main_theme.ogg", db+0, 1.0};
	};
};

class CfgUnitInsignia
{
	class NatusDominariTaskForce
	{
		displayName = "Natus Dominari Task Force"; // Name displayed in Arsenal
		author = "Natus Dominari"; // Author displayed in Arsenal
		texture = "\nd\client\images\insignia.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
};