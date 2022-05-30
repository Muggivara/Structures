

#include <iostream>

struct Dog
{
	char name[10];
	int age;
	short amount;
	std::string gender;
	long number_of_paws;
};
struct Cat
{
	char name[20];
	int age;
	short amount;
	std::string gender;
	long number_of_paws;
};
struct Playstation 
{
	int amount_of_games;
	char favorite_game[10];
	unsigned short memory;
	long long amount_of_awards;
	std::string favorite_waifu;
};
struct Bysicle
{
	unsigned int amount_of_weels;
	char name_of_bycile[30];
	double carrying_weight;
	short amount_of_passenger;
	long the_size_of_weels;
};
struct Otvertka
{
	int vodka;
	double orange_juice;
	short orange;
	long ice_cube;
	std::string nastroyenie;
};
int main() 
{
	Dog { "Beherovka",12,3,"male",4};
	Cat { "Leopoldatel",10,10,"male",4 };
	Playstation { 6,"Witcher",500,35,"Tifa Logkhard" };
	Bysicle { 2,"Black Mount",100,0,24 };
	Otvertka { 50,150,30,180,"Plohoe" };
}
