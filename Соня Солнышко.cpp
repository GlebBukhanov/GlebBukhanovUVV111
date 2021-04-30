#include <iostream>
#include Angle
using namespace std;
int main()
{
	Angle z;
	int q;
	float b;
	cin >> b;
	cin >> q;
	z.Set_value(q);
	cout << z.Get_value();
	cout << z.Degrees_Radians();
	return 0;
}