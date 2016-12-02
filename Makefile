CC = g++
CFLAGS = -g -Wall
LIBFLAGS = -c -Wall

default: clean all

all: clean CatFactory Menu FoodFactory HouseCat TabbyCat Donut Fish Health TomCat

TomCat:
	$(CC) $(CFLAGS) main.cpp -o TomCat -L. -lFish \
	-lMenu -lFoodFactory -lDonut -lHealth -lHouseCat -lCatFactory \
	-lTabbyCat

CatFactory:
	$(CC) $(LIBFLAGS) CatFactory.cpp -o libCatFactory.so

Menu:
	$(CC) $(LIBFLAGS) Menu.cpp -o libMenu.so

FoodFactory:
	$(CC) $(LIBFLAGS) FoodFactory.cpp -o libFoodFactory.so

HouseCat:
	$(CC) $(LIBFLAGS) HouseCat.cpp -o libHouseCat.so

TabbyCat:
	$(CC) $(LIBFLAGS) TabbyCat.cpp -o libTabbyCat.so

Donut:
	$(CC) $(LIBFLAGS) Donut.cpp -o libDonut.so

Fish:
	$(CC) $(LIBFLAGS) Fish.cpp -o libFish.so

Health:
	$(CC) $(LIBFLAGS) Health.cpp -o libHealth.so

clean:
	rm -f *.so
	rm -f TomCat
