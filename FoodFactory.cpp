#include "FoodFactory.h"
#include "Fish.h"
#include "Donut.h"
#include "IFood.h"

namespace TomCat {
	IFood* FoodFactory::Chef(int Selection) {
		switch (Selection) {
			case 1:{
				Fish *newFish = new Fish;
				return newFish;
				break;
			}
			case 2: {
				Donut *newDonut = new Donut;
				return newDonut;
				break;
			}
		}

		Fish *newFish = new Fish;
		return newFish;
	}
}