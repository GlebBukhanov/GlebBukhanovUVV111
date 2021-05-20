#include <iostream>
#include "heritage.h"
using namespace std;

double Romb::Perimeter()const { return 4 * lenth; };
double Romb::Square()const { return l * hight; };

double Parallelepiped::Perimeter()const { return 4 * lenth + 4 * width + 4 * hight; };
double Parallelepiped::Square()const { return 2 * (lenth * width + lenth * hight + width * hight); };

double Ellipse:: Perimeter()const { return 2 * M_PI * (sqrt(pow(largesemiaxis, 2) * pow(smallsemiaxis, 2)) / 2); };
double Ellipse:: Square()const { return M_PI * largesemiaxis * smallsemiaxis; };


