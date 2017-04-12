#pragma once
#include "Load_file.h"
#include "Start_menue.h"

enum GAME_MODE_NUM : int
{
	MAIN,
	START,
};

Load_file load_file;
Start_menue start_menue(load_file.start_graph);