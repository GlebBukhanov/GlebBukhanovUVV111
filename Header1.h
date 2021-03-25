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
	}// вводим число.
	float Get_value() {
		return ang;
	}// выводим число, которое мы ввели.
	float Degrees_Radians() {
		return ang / 180 * M_PI;
	};// функция, которая переводит градусы в радианы.
	float Degrees_0_360();// приведение к диапазону 0-360.
	void Add_Degrees(float b);// Увеличение угла на заданную величину.
	void Subtract_Degrees(float b);//Уменьшение угла на заданную величину.
	float Get_Sin();// Получение синуса углов.
	bool Compare_Angles(float c);//Сравнение углов.
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