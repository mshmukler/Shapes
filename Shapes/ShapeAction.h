#pragma once
#include <memory>
#include "menu.h"
#include <list>


namespace Shapes
{
	using namespace std;

	class Shape;
	typedef list< shared_ptr<Shape> > ListOfShapes;

	class ShapeAction :	public Menu::Action
	{
	private:
		ListOfShapes &_shapes;
	protected:
		ShapeAction(ListOfShapes& shapes) : _shapes(shapes) {}
		ListOfShapes& Shapes() const { return _shapes; }
		virtual const string& Text() const = 0;
		virtual void Do() = 0;
	};
}
