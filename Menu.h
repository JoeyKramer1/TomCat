#pragma once
#include "IMenu.h"
#include "ICat.h"
#include <vector>

namespace TomCat {
	class Menu : public IMenu {
	public:
		Menu();
		~Menu();
		ICat* CreateCat();
		void PrintMenu();
		int MenuOption(const int*);

	private:
		std::vector<std::string> _mainMenu;
		std::vector<std::string> _foodMenu;
		std::vector<std::string> _trainMenu;
		int _exitOption;
		int _subMenu;
	};
}