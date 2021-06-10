#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Man {
private:
	string name;
	double age;
	string gender;
	double weight;
public:
	Man(string cinname, double cinage, string cingender, double cinweight) {
		name = cinname;
		age = cinage;
		gender = cingender;
		weight = cinweight;
	}//конструктор
	~Man() {};
	string Changename(string newname) {
		name = newname;
		return name;
	}//изменение имени
	double Changeage(double newage) {
		age = newage;
		return age;
	}//изменение возраста
	double Changeweight(double newweight) {
		weight = newweight;
		return weight;
	}//изменение веса
};
class Student {
private:
	double yearofstudy1;
	double yearofstudy2;
public:
	Student(double cinyearofstudy1) {
		yearofstudy1 = cinyearofstudy1;
		yearofstudy2 = cinyearofstudy1 + 1;

	}
	double Changeyearofstudy(double oldyearofstudy, double newyearofstudy) {
		yearofstudy1 = oldyearofstudy;
		yearofstudy2 = newyearofstudy;
		return yearofstudy1, yearofstudy2;
	};//изменение года обучения
};