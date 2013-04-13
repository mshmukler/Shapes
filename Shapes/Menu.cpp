#include "stdafx.h"
#include "Menu.h"
#include <iostream>

namespace Shapes
{
	using namespace std;

	Menu Menu::s_Menu;

	Menu::Menu(void)
	{
	}

	
	Menu::~Menu(void)
	{
	}

	Menu& Menu::Instance()
	{
		return s_Menu;
	}

	void Menu::Print() const
	{
		cout << "Choose action:" << endl;
		int c = 1;
		auto i = begin(_entries);
		while (i != end(_entries))
		{
			cout << c << ". " << (*i)->Text() << '.' << endl;
			++i;
			++c;
		}
	}

	void Menu::Start() const
	{
		int nElements = _entries.size();

		while (true)
		{
			Print();

			int entry;
			cin >> entry;
			--entry;

			if (entry < 0 || entry >= nElements)
			{
				cerr << "Error, choose a valid entry." << endl;
				continue;
			}
			_entries[entry]->Do();
		}
	}

	void Menu::Register(Action* action)
	{
		_entries.push_back(action);
	}

	Menu::Action::Action()
	{
		Menu::Instance().Register(this);
	}
}