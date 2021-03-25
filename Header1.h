#pragma once
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
class Angle {
private:
	float ang;
public:
	void Set_value(float a) {
		ang = a;
	}// ������ �����.
	float Get_value() {
		return ang;
	}// ������� �����, ������� �� �����.
	float Degrees_Radians() {
		return ang / 180 * M_PI;
	};// �������, ������� ��������� ������� � �������.
	float Degrees_0_360();// ���������� � ��������� 0-360.
	void Add_Degrees(float b);// ���������� ���� �� �������� ��������.
	void Subtract_Degrees(float b);//���������� ���� �� �������� ��������.
	float Get_Sin();// ��������� ������ �����.
	bool Compare_Angles(float c);//��������� �����.
};


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