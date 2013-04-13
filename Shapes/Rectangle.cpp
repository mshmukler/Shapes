#include "stdafx.h"
#include "Rectangle.h"
#include <iostream>

namespace Shapes
{
	using namespace std;

	const string Rectangle::_name = "Rectangle";

	Rectangle::~Rectangle()
	{
		cout << GetName() << " was destroyed" << endl;
	}

	const string& Rectangle::GetName() const
	{
		return _name;
	}

	double Rectangle::Area() const
	{
		return _width * _height;
	}

	void Rectangle::Print() const
	{
		Shape::Print();
		cout << " width => " << _width << "  height => " << _height << endl;
	}

}
