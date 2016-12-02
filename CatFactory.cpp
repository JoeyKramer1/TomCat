#include "CatFactory.h"
#include "ICat.h"
#include "HouseCat.h"
#include "TabbyCat.h"
#include "Health.h"

namespace TomCat {
	ICat* CatFactory::CreateCat(const int *Select) {
		ICat *newCat;
		switch (*Select) {
			case 1: {
				Health *mHealth = new Health(100, 1, 1);
				newCat = new HouseCat(mHealth);
				break;
			}
			case 2: {
				Health *mHealth = new Health(50, 20, 20);
				newCat = new TabbyCat(mHealth);
				break;
			}
		}
		return newCat;
	}
}