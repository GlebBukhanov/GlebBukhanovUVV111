#include <iostream>
#include "Headera.h"
#include <cmath>
using namespace std;

int main() {
	Man alex{ "Alex", 20, "male", 80 };
	cout << alex.Changename("Gleb");
	cout << alex.Changeage(18);
	cout << alex.Changeweight(82);
	Student jake{ 2015 };
	cout << jake.Changeyearofstudy(2016, 2017);
}