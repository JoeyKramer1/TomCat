#include <iostream>
#include <vector>
#include <algorithm>
#include "Menu.h"
#include "CatFactory.h"
#include "ICat.h"

namespace TomCat {
	Menu::Menu() 
		: _subMenu(0)
	{
		_mainMenu.push_back("1. See Levels");
		_mainMenu.push_back("2. Feed");
		_mainMenu.push_back("3. Train");
		_mainMenu.push_back("4. Exit");
		_exitOption = 4;

		_foodMenu.push_back("1. Fish");
		_foodMenu.push_back("2. Donut");
		_foodMenu.push_back("3. Back");

		_trainMenu.push_back("1. Yarn Ball");
		_trainMenu.push_back("2. Kitty Litter");
		_trainMenu.push_back("3. Back");
	}

	Menu::~Menu() {
		std::cout << "Print Menu Destructor" << std::endl;
	}

	ICat* Menu::CreateCat() {
		CatFactory newFactory;
		int select = 0;
		while ((select != 1) && (select != 2)) {
			std::cout << "Create new cat:" << std::endl
					  << "1. House cat" << std::endl
					  << "2. Tabby cat" << std::endl;

			std::cin >> select;
		}
		return (newFactory.CreateCat(&select));
	}

	void Menu::PrintMenu() {
		std::vector<std::string> tempMenu;
		switch(_subMenu) {
			case 0:
				tempMenu = _mainMenu;
				break;
			case 1:
				tempMenu = _foodMenu;
				break;
			case 2:
				tempMenu = _trainMenu;
				break;
		}
		for(std::vector<std::string>::iterator it = tempMenu.begin(); it != tempMenu.end(); ++it) {
    		std::cout << *it << std::endl;
}
	}

	int Menu::MenuOption(const int *Selection) {
		//return values and meanings:
		//0 - exit
		//1 - print levels
		//-1 - wanting further std::cin from user
		//2 - feed fish
		//3 - feed donut
		//4 - train Curiosity
		//5 - train speed

		if ((_subMenu == 0) && (*Selection == _exitOption))
			return 0;

		if (_subMenu == 0) {
			switch (*Selection) {
				case 1:
					return 1;
					break;
				case 2:
					_subMenu = 1;
					return -1;
					break;
				case 3:
					_subMenu = 2;
					return -1;
					break;
				default:
					return -1;
					break;
			}
		}
		if (_subMenu == 1) {
			switch (*Selection) {
				case 1:
					_subMenu = 0;
					return 2;
					break;
				case 2:
					_subMenu = 0;
					return 3;
					break;
				case 3:
					_subMenu = 0;
					return -1;
					break;
				default:
					return -1;
					break;
			}
		}
		if (_subMenu == 2) {
			switch (*Selection) {
				case 1:
					_subMenu = 0;
					return 4;
					break;
				case 2:
					_subMenu = 0;
					return 5;
					break;
				case 3:
					_subMenu = 0;
					return -1;
					break;
				default: 
					return -1;
					break;
			}
		}
		return -1;
	}
}