#pragma once
#include "stdafx.h"
#include <string>

namespace Shapes
{
	using namespace std;

	class Shape
	{
	protected:
		virtual const string& GetName() const = 0;

	public:
		virtual ~Shape(void);
		virtual double Area() const = 0;
		virtual void Print() const;
	};
}