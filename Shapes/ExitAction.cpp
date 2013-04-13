#include "stdafx.h"
#include "ExitAction.h"
#include <iostream>
#include "Shape.h"

namespace Shapes
{
	const string ExitAction::_text = "Exit";

	const string& ExitAction::Text() const
	{
		return _text;
	}

	void ExitAction::Do() 
	{
		int dummy;
		cout << "Exiting..." << endl;
		
		// Removing the shapes from the list will delete the last pointer to them and thier destructor should be called.
		Shapes().clear();

		cout << "Press Enter to continue..." << endl;
		cin.ignore();
		cin.get();

		exit(0);
	}
}
