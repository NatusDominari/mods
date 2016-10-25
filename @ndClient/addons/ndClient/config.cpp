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