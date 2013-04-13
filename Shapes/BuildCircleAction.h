#pragma once
#include "ShapeAction.h"

namespace Shapes
{
	class BuildCircleAction : public ShapeAction
	{
	private:
		static const string _text; 
		virtual const string& Text() const;
		virtual void Do();

	public:
		BuildCircleAction(ListOfShapes& shapes) : ShapeAction(shapes) {}
	};
}