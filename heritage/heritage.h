#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

class Figures {
private:
	string figure;
public:
	Figures(string enterfigure) {
		figure = enterfigure;
	};
	Perimeter();
	Square();
	~Figures() {};
};
class Romb : public Figures {
private:
	double lenth;
	double hight;
public:
	Romb(double valuelenth, double valuehight) {
		lenth = valuelenth;
		hight = valuehight;
	}
	double Perimeter() const;
	double Square() const;
	~Romb() {};
};
class Parallelepiped:public Figures {
private:
	double lenth;
	double width;
	double hight;
public:
	Parallelepiped(double valuelenth, double valuewidth, double valuehight) {
		lenth = valuelenth;
		width = valuewidth;
		hight = valuehight;
	}
	double Perimeter()const;
	double Square()const;
	~Parallelepiped() {};
};
class Ellipse :public Figures {
private:
	double largesemiaxis;
	double smallsemiaxis;
public:
	Ellipse(double valuelargesemiaxis, double valuesmallsemiaxis) {
		largesemiaxis = valuelargesemiaxis;
		smallsemiaxis = valuesmallsemiaxis;
	}
	double Perimeter()const;
	double Square()const;
};

