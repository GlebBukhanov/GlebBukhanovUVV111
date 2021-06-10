#include <iostream>
#include <cmath>
#include "Project 1.2.h"

int main()
{
	int grades;
	int minutes;
	cin >> grades;
	cin >> minutes;
	Angle z{ grades,minutes };
	cout << z.Add_Degrees(30)<<endl;
	cout << z.Degrees_Radians()<<endl;
	cout << z.Subtract_Degrees(30)<<endl;
	cout << z.Get_Sin()<<endl;
	cout << z.Compare(30)<<endl;
}

