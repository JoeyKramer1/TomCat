#include <iostream>
#include "Menu.h"
#include "FoodFactory.h"
#include "ICat.h"
#include "IMenu.h"

int main() {
	TomCat::Menu *newMenu = new TomCat::Menu;
	TomCat::IMenu *iMenu = newMenu;
	TomCat::ICat *iCat = iMenu->CreateCat();

	while(1) {
		int MenuOption;

		if (iCat->GetAttributeLevel(0) <= 0) {
			std::cout << "Game Over your cat is dead." << std::endl;
			break;
		}
		int ret = -1;
		while (ret < 0) {
			iMenu->PrintMenu();
			std::cin >> MenuOption;
			ret = iMenu->MenuOption(&MenuOption);
		}
		if (ret == 0) 
			break;

		switch (ret) {
			case 1:
				iCat->PrintStats();
				break;
			case 2:{
				TomCat::FoodFactory foodFactory;
				iCat->FeedFood(foodFactory.Chef(1));
				break;
			}
			case 3: {
				TomCat::FoodFactory foodFactory;
				iCat->FeedFood(foodFactory.Chef(2));
				break;
			}
			case 4: {
				iCat->TrainAttribute(1, 20);
				break;
			}
			case 5: {
				iCat->TrainAttribute(2, 20);
				break;
			}
		}
		iCat->EndRound();
		std::cout << "\n\n";
	}

	delete iCat;
	delete newMenu;
	return 0;
}