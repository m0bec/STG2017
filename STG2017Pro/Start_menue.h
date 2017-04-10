#pragma once
#include "DxLib.h"

class Start_menue
{
private:
	void dispStart();

	int *pstart_graph;

public:
	Start_menue(int &pstart_graph_);
	void Run();
};