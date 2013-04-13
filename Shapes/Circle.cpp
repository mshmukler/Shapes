#include "stdafx.h"
#include "Circle.h"
#include <iostream>
#define _USE_MATH_DEFINES 
#include <math.h>

namespace Shapes
{
	using namespace std;

	const string Circle::_name = "Circle";

	Circle::~Circle()
	{
		cout << GetName() << " was destroyed" << endl;
	}

	const string& Circle::GetName() const
	{
		return _name;
	}

	double Circle::Area() const
	{
		return _radius * _radius * M_PI;
	}

	void Circle::Print() const
	{
		Shape::Print();
		cout << " Radius => " << _radius << endl;
	}

}
