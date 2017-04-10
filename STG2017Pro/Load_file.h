#pragma once
#include "DxLib.h"

class Load_file 
{
private:
	int Start_disp;
	int load_graph;

	void loadStartmenue();
	void loadGraph();
	

public:
	int getLoadgraph();
	void dispLoad();
	void Run();
};