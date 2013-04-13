#pragma once
#include <string>
#include <vector>

namespace Shapes
{
	using namespace std;

	class Menu
	{
	public:
		// forward declaration
		class Action;

	private:
		// The Menu class is singelton
		static Menu s_Menu;
		
		// It holds a collection of Actions
		vector<Action *> _entries;

		// The Actions are being "Registered" to the menu and then holded in _entries 
		void Register(Action* action);
		Menu(void);

		void Print() const;

	public:
		static Menu &Instance();

		void Start() const;
		~Menu(void);
		

		class Action
		{
		public:
			// Every action is registered to the Menu upon its creation
			Action();
			
			// Every specific action (derived) knows to display its own "Text" and "Do" its own thing
			virtual const string& Text() const = 0;
			virtual void Do() = 0;
		};

	};

}