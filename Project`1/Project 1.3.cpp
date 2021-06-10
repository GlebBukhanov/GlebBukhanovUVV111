#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
	int grades;
	int minutes;
	cin >> grades;
	cin >> minutes;
	Angle z(grades,minutes);
	cout<<z.Degrees_0_360;
	cout << z.Get_Sin;
	cout << z.Add_Degrees(35);
	cout << z.Subtract_Degrees(35);
	cout << z.Compare(35);
	cout << z.Degrees_Radians();
	return 0;
}