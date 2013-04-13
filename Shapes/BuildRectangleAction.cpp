#include "stdafx.h"
#include <iostream>
#include "BuildRectangleAction.h"
#include "Rectangle.h"
#include <memory>

namespace Shapes
{
	using namespace std;

	const string BuildRectangleAction::_text = "Create new rectangle";

	const string& BuildRectangleAction::Text() const
	{
		return _text;
	}

	void BuildRectangleAction::Do() 
	{
		cout << "Creating new rectangle." << endl;
		cout << "Enter width: ";
		double width;
		cin >> width;

		cout << "Enter height: ";
		double height;
		cin >> height;

		auto rectangle = make_shared<Rectangle>(width, height);
		Shapes().push_back(rectangle);
	}
}
