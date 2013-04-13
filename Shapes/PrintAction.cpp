#include "stdafx.h"
#include "PrintAction.h"
#include <iostream>
#include "Shape.h"

namespace Shapes
{
	using namespace std;
	const string PrintAction::_text = "Print all shapes";

	const string& PrintAction::Text() const
	{
		return _text;
	}

	void PrintAction::Do() 
	{
		cout << "Dumping all shapes:" << endl;
		auto pShape = begin(Shapes());
		while (pShape != end(Shapes()))
		{
			(*pShape)->Print();
			++pShape;
		}
	}
}