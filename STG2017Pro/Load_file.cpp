#include "Load_file.h"

void Load_file::loadGraph()
{
	load_graph = LoadGraph("Graph/load.png");
}

void Load_file::loadStartmenue()
{
	start_graph = LoadGraph("Graph/title.png");
	game_select_graph = LoadGraph("Graph/Start.png");
}

void Load_file::dispLoad()
{
	DrawGraph(0, 0, load_graph, true);
}

int Load_file::getLoadgraph()
{
	return load_graph;
}

void Load_file::Run()
{
	loadGraph();

	SetUseASyncLoadFlag(true);
	loadStartmenue();
	SetUseASyncLoadFlag(false);
}