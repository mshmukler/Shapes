#pragma once
#include "shape.h"
#include <string>

namespace Shapes
{
	class Circle :	public Shape
	{
	private:
		static const string _name;
		const double _radius;
		virtual const string& GetName() const;

	public:
		Circle(double radius) : _radius(radius) {}
		virtual ~Circle();
		virtual double Area() const;
		virtual void Print() const;
	};
}
