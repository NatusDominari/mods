respawn = 1; // BIRD
respawnDialog = 0;
disabledAI = 0;
debriefing = 1;
respawnTemplates[] = {"Spectator"};
disableChannels[] = { {0,false,true}, {1,false,true} };

ReviveMode = 1;                         //0: disabled, 1: enabled, 2: controlled by player attributes
ReviveUnconsciousStateMode = 0;         //0: basic, 1: advanced, 2: realistic
ReviveRequiredTrait = 1;                //0: none, 1: medic trait is required
ReviveRequiredItems = 1;                //0: none, 1: medkit, 2: medkit or first aid kit
ReviveRequiredItemsFakConsumed = 1;     //0: first aid kit is not consumed upon revive, 1: first aid kit is consumed
ReviveDelay = 30;                       //time needed to revive someone (in secs)
ReviveMedicSpeedMultiplier = 1;         //speed multiplier for revive performed by medic
ReviveForceRespawnDelay = 5;            //time needed to perform force respawn (in secs)
ReviveBleedOutDelay = 180;              //unconscious state duration (in secs)

class Header
{
	gameType   = Coop;          // DM, Team, Coop, CTI
	minPlayers = 1;            // min # of players the mission supports
	maxPlayers = 20;           // Max # of players the mission supports
};

corpseManagerMode = 1;
corpseLimit = 50;
corpseRemovalMinTime = 300;
corpseRemovalMaxTime = 1800;

class CfgDebriefing
{
	class End1
	{
		title = "AA destroyed";
		description = "Blufor wins.";
	};

    class End2
	{
		title = "Blufor are dead";
		description = "Opfor wins.";
	};

    class End3
	{
		title = "Out of time";
		description = "Opfor wins.";
	};
};

class CfgSounds
{
	sounds[] = {};

	class SpawnBlufor
	{
		name = "";
		// filename, volume, pitch
		sound[] = {"\ndClient\sounds\spawn_blufor.ogg", 0.5, 1};
		titles[] = {0,""};
	};

	class SpawnOpfor
	{
		name = "";
		// filename, volume, pitch
		sound[] = {"\ndClient\sounds\spawn_opfor.ogg", 0.5, 1};
		titles[] = {0,""};
	};

	class Suspense
	{
		name = "";
		// filename, volume, pitch
		sound[] = {"\ndClient\sounds\suspense.ogg", 0.5, 1};
		titles[] = {0,""};
	};

	class BluforWins
	{
		name = "";
		// filename, volume, pitch
		sound[] = {"\ndClient\sounds\blufor_wins.ogg", 1, 1};
		titles[] = {0,""};
	};

	class OpforWins
	{
		name = "";
		// filename, volume, pitch
		sound[] = {"\ndClient\sounds\opfor_wins.ogg", 1, 1};
		titles[] = {0,""};
	};
};