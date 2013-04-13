#pragma once
#include "shape.h"
#include <string>

namespace Shapes
{
	class Rectangle : public Shape
	{
	private:
		static const string _name;
		const double _width;
		const double _height;
		virtual const string& GetName() const;

	public:
		Rectangle(double width, double height) : _width(width), _height(height) {}
		virtual ~Rectangle();
		virtual double Area() const;
		virtual void Print() const;
	};
}
