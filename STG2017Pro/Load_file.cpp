#include "Load_file.h"

void Load_file::loadDisp()
{
	LoadGraph("Graph/load.png");
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
	loadDisp();

	SetUseASyncLoadFlag(true);
	loadStartmenue();
	SetUseASyncLoadFlag(false);
}