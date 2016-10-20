/*
    Search and destroy game loop
*/

#include "constants.h"

if (!isServer) exitWith {};
end_mission_server = compileFinal preprocessFileLineNumbers "\ndServer\sd\end_mission_server.sqf";

aa_destroyed = false;
time_elapsed = 0;
timeout_warning_showed = false;
blufor_dead = false;
mission_over = false;

// send message to clients - planning phase starts
planning_phase_start = true;
publicVariable "planning_phase_start";
planning_phase_ended = false;

while { true } do {
    sleep 10;
    time_elapsed = time_elapsed + 10;

    if (aa_destroyed && !mission_over) then {
        mission_over = true;
        ["End1", "BluforWins"] call end_mission_server;
    };

    if (time_elapsed>=PLANNING_TIME && !planning_phase_ended) then {
        planning_phase_ended = true;
        publicVariable "planning_phase_ended";
    };

    if (time_elapsed>=(PLANNING_TIME+ROUND_TIME-60) && !timeout_warning_showed) then {
        timeout_warning_showed = true;
        publicVariable "timeout_warning_showed";
    };

    if (!mission_over && time_elapsed>=(PLANNING_TIME+ROUND_TIME)) then {
        mission_over = true;
        ["End3", "OpforWins"] call end_mission_server;
    };

    if (!mission_over && blufor_dead) then {
        mission_over = true;
        ["End2", "OpforWins"] call end_mission_server;
    };
};