// Shapes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <list>
#include "BuildCircleAction.h"
#include "BuildRectangleAction.h"
#include "PrintAction.h"
#include "ExitAction.h"

using namespace std;
using namespace Shapes;

int _tmain(int argc, _TCHAR* argv[])
{
	ListOfShapes shapes;
	BuildCircleAction buildCircleAction(shapes);
	BuildRectangleAction buildRectangleAction(shapes);
	PrintAction printAction(shapes);
	ExitAction exitAction(shapes);

	Menu::Instance().Start();
	
	return 0;
}

