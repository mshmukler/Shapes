#include "stdafx.h"
#include <iostream>
#include <string>
#include "Shape.h"

namespace Shapes
{
	using namespace std;

	// This is delegation design pattern -> only the direvers of shape will know how to perform
	// GetName and Area functionality
	void Shape::Print() const
	{
		cout << GetName() << ": Area => " << Area();
	}

	Shape::~Shape(void)
	{
	}
}