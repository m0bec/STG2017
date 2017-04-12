#pragma once
#include "DxLib.h"

class Base_menue
{
private:
	void dispThis();
	void Exit();

	int menue_number;
	int *pselect_number;
	int *this_graph;
	int x;
	int y;
	bool exit_flag;

public:
	Base_menue(int menue_number_, int *select_number_, int *this_graph_, int x_, int y_);
	void setExitflag();
	void Run();
};