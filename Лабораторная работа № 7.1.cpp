#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

float add_values(float a, float b) {
	return (a / b);
}

double add_values(float a, float b, float c, float d) {
	return ((a * c + b * d) / (pow(c, 2) + pow(d, 2)));
}

double add_values(float a, float b, float c, float d, float f) {
	return ((b * c - a * f) / (pow(c, 2) + pow(f, 2)));
}


int main() 
{
	setlocale(LC_ALL, "Russian"); // Для отображение Кирилицы


	float a, b;
	double c, d, f;

	cout << "Введите целое число A - "; 
	cin >> a;
	cout << "Введите целое число B - "; 
	cin >> b;

	cout << endl << "1. Вычисление: (a/b) = " << add_values(a, b) << endl << endl;

	cout << "Введите значение C - "; 
	cin >> c;
	cout << "Введите значение D - "; 
	cin >> d; f = d;

	cout << endl << "2. Вычисление: ((a+b)/((c+d)) = " << add_values(a, b, c, d) << " (+) " << add_values(a, b, c, d, f) << endl;

    return 0;
}