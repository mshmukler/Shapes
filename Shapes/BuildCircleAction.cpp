#include "stdafx.h"
#include "BuildCircleAction.h"
#include <iostream>
#include "Circle.h"
#include <memory>

namespace Shapes
{
	using namespace std;

	const string BuildCircleAction::_text = "Create new circle";

	const string& BuildCircleAction::Text() const
	{
		return _text;
	}

	void BuildCircleAction::Do() 
	{
		cout << "Creating new circle." << endl << "Enter radius: ";
		double radius;
		cin >> radius;
		auto circle = make_shared<Circle>(radius);
		Shapes().push_back(circle);
	}
}
