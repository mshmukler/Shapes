#pragma once
#include "ShapeAction.h"

namespace Shapes
{
	class ExitAction : public ShapeAction
	{
	private:
		static const string _text; 
		virtual const string& Text() const;
		virtual void Do();

	public:
		ExitAction(ListOfShapes& shapes) : ShapeAction(shapes) {}
	};
}