#pragma once
#include "ShapeAction.h"

namespace Shapes
{
	class PrintAction :	public ShapeAction
	{
	private:
		static const string _text; 
		virtual const string& Text() const;
		virtual void Do();
		
	public:
		PrintAction(ListOfShapes& shapes) : ShapeAction(shapes) {}

		
	};
}

