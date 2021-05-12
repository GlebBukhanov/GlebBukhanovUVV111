#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
using namespace std;

class Figures {
private:
	string a;
public:
	Figures(string b);
};
class Romb : public Figures {
private:
	float l;
	float w;
public:
	void Setl(float length) { l = length; };
	void Setv(float hight) { w = hight; };
	float Perimeter() { return 4 * l; };
	float Square() { return l * w; };
};
class Parallelepiped:public Figures {
private:
	float e;
	float f;
	float g;
public:
	void Sete(float length) { e = length; };
	void Setf(float width) { f = width; };
	void Setg(float height) { g = height; };
	float Perimeter() { return 4 * e + 4 * f + 4 * g; };
	float Square() { return 2 * (e * f + e * g + f * g); };
};
class Ellipse :public Figures {
private:
	float k;
	float m;
	float o;
public:
	void Setk(float largesemiaxis) { k = largesemiaxis; };
	void Setm(float smallsemiaxis) { m = smallsemiaxis; };
	float Perimeter() { return 2 * M_PI * (sqrt(pow(k, 2) * pow(m, 2)) / 2); };
	float Square() { return M_PI * k * m; };
};

