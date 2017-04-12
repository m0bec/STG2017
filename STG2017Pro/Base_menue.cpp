#include "Base_menue.h"

Base_menue::Base_menue(int menue_number_, int *select_number_, int *this_graph_, int x_, int y_)
{
	menue_number = menue_number_;
	pselect_number = select_number_;
	this_graph = this_graph_;
	x = x_;
	y = y_;
	exit_flag = false;
}

void Base_menue::dispThis()
{
	if (*pselect_number == menue_number) {
		DrawGraph(x, y, *this_graph, true);
	}
	else {
		SetDrawBlendMode(DX_BLENDMODE_ALPHA, 128);
		DrawGraph(x, y, *this_graph, true);
		SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 0);
	}
}

void Base_menue::Exit()
{
	if (exit_flag) {
		*pselect_number = 0;
		exit_flag = false;
	}
}

void Base_menue::setExitflag()
{
	exit_flag = true;
}

void Base_menue::Run()
{
	dispThis();
	Exit();
}