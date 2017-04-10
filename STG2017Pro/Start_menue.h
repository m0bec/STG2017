#pragma once
#include "DxLib.h"

class Start_menue
{
private:
	
	void dispStart();

	int *start_graph;

public:
	Start_menue(int *pstart_graph_);
	void Run();
};