#include "Start_menue.h"

Start_menue::Start_menue(int &pstart_graph_)
{
	pstart_graph = &pstart_graph_;
}

void Start_menue::dispStart()
{
	DrawGraph(0, 0, *pstart_graph, true);
}

void Start_menue::Run()
{
	dispStart();
}