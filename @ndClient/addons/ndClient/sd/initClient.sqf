if (!isDedicated) then {
    // performance hacks
    setTerrainGrid 25;
    setViewDistance 1000;
    setObjectViewDistance 1100;
    setDetailMapBlendPars [1100,1200];

    enableSentences false;
    enableRadio false;
    enableSaving [false,false];

    // end mission screen
    "mission_end" addPublicVariableEventHandler {
        [] spawn {
            playSound (mission_end select 1);
            sleep 14; // that's how long the sound is
            endMission (mission_end select 0);
        };
    };

    // one minute warning
    "timeout_warning_showed" addPublicVariableEventHandler {
        playSound "Suspense";
        hintSilent "One minute left!";
    };

    // planning phase started
    "planning_phase_started" addPublicVariableEventHandler {
        hintSilent "Briefing phase - listen to your Squad Leader!";
    };

    // planning phase ended
    "planning_phase_ended" addPublicVariableEventHandler {
        switch (side player) do {
            case west: { playSound "SpawnBlufor"; };
            case east: { playSound "SpawnOpfor"; };
        };

        hintSilent "Mission starts! GO GO GO!";
    };

    while { isNil "planning_phase_ended" } do {
        cutText ["Briefing phase, don't leave your spawn area.", "PLAIN DOWN", 5];
        sleep 30;
    };
};

if (isServer) then {
    // server-side logic
    server_loop = compileFinal preprocessFileLineNumbers "\ndServer\sd\server_loop.sqf";

    [] spawn server_loop;
};