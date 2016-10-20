// executes end of mission on the server

if (!isServer) exitWith {};

mission_end = _this;
publicVariable "mission_end";
sleep 15;

endMission (mission_end select 0);