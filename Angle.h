#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
class Angle {
private: 
	float _ang;
public:
	Angle() = default;
	Angle(float ang) = default;
	~Angle() = default;
	void Set_value(float a) {
		ang = a;}// вводим число.
	float Get_value() {
		return ang;}// выводим число, которое мы ввели.
	float Degrees_Radians() {
		return ang / 180 * M_PI;};// функция, которая переводит градусы в радианы.
	float Degrees_0_360(){
		return ang%360;};// приведение к диапазону 0-360.
	void Add_Degrees(float b){
		ang=ang+b;};// Увеличение угла на заданную величину.
	void Subtract_Degrees(float b){
		ang=ang-b;};//Уменьшение угла на заданную величину.
	float Get_Sin(){
		float w=ang;
		w=ang / 180 * M_PI;
		return sin(w);};// Получение синуса угла.
	bool Compare_Angles(float c){
		if (ang>c){
			return true};
		else{
			return false;};};//Сравнение углов.
};
