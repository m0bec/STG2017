#pragma once
#include "Load_file.h"
#include "Start_menue.h"
#include "Game_select.h"

enum GAME_MODE_NUM : int
{
	MAIN,
	START,
};

Load_file load_file;
Start_menue start_menue(load_file.start_graph);
Game_select game_select(GAME_MODE_NUM::START, int *select_number_, &load_file.game_select_graph, 0, 0);