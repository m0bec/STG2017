#pragma once
#include "Load_file.h"
#include "Start_menue.h"
#include "Game_select.h"
#include "Menue_system.h"

enum GAME_MODE_NUM : int
{
	MAIN,
	START,
};

Load_file load_file;
Menue_system menue_system(GAME_MODE_NUM::MAIN);
Start_menue start_menue(load_file.start_graph);
Game_select game_select(GAME_MODE_NUM::START, &menue_system.menue_num, &load_file.game_select_graph, 0, 0);