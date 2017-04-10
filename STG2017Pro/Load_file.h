#pragma once
#include "DxLib.h"

class Load_file 
{
private:
	int load_disp;
	int Start_disp;

	void loadStartmenue();
	void loadDisp();
	void dispLoad();

public:
	void Run();
};