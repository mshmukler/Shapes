#pragma once
#include "ShapeAction.h"

namespace Shapes
{
	class BuildRectangleAction : public ShapeAction
	{
	private:
		static const string _text; 
		virtual const string& Text() const;
		virtual void Do();

	public:
		BuildRectangleAction(ListOfShapes& shapes) : ShapeAction(shapes) {}
	};
}