#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
class Angle {
private:
	int _grades;
	int _minutes;
	double Merger(int grades, int minutes) {
		double temp = static_cast<double>(_grades) + static_cast<double>(_minutes) / 100;
		return temp;
	}

public:
	Angle(int grades, int minutes) {
		_grades = grades;
		_minutes = minutes;

	};
	~Angle() = default;

	double Degrees_Radians() {
		return Merger(_grades, _minutes) / 180 * M_PI;
	};// функция, которая переводит градусы в радианы.
	double Degrees_0_360() {
		int temp = Merger(_grades, _minutes);
		return temp % 360;
	};// приведение к диапазону 0-360.
	double Add_Degrees(float b) {
		double ang;
		ang = Merger(_grades, _minutes) + b;
	};// Увеличение угла на заданную величину.
	double Subtract_Degrees(float b) {
		double ang;
		ang = Merger(_grades, _minutes) - b;
	};//Уменьшение угла на заданную величину.
	double Get_Sin() {
		double w;
		w = Merger(_grades, _minutes) / 180 * M_PI;
		return sin(w);
	};// Получение синуса угла.
	bool Compare(Angle& other) {
		if (Merger(_grades, _minutes) > Merger(other._grades, other._minutes))
			return true;
		else
			return false;

	}
};
