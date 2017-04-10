#include "Load_file.h"

void Load_file::loadGraph()
{
	load_graph = LoadGraph("Graph/load.png");
}

void Load_file::loadStartmenue()
{
	LoadGraph("Graph/title.png");
}

void Load_file::dispLoad()
{
	
}

void Load_file::Run()
{
	loadGraph();

	SetUseASyncLoadFlag(true);
	loadStartmenue();
	SetUseASyncLoadFlag(false);
}