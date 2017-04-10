#pragma once
#include "DxLib.h"

class Load_file 
{
private:
	int Start_disp;

	void loadStartmenue();
	void loadGraph();
	void dispLoad();

public:
	int load_graph;
	void Run();
};