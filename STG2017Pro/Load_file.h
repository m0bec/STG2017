#pragma once
#include "DxLib.h"

class Load_file 
{
private:
	int load_graph;

	void loadStartmenue();
	void loadGraph();
	

public:
	int getLoadgraph();
	void dispLoad();
	void Run();

	int start_graph;
};