#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Complex_Number
{
private:
	double real_part, imaginary_part;								//действительная часть, мнимая часть
public:
	Complex_Number();												//конструктор по умолчанию
	Complex_Number(double real_part, double imaginary_part);		//конструктор с параметрами
	Complex_Number(const Complex_Number& other);					//конструктор копирования
	~Complex_Number();												//деструктор

	void Set_real();												//установка действительной части
	void Set_imaginary();											//установка мнимой части
	double Get_real();												//вернуть действительную часть
	double Get_imaginaty();											//вернуть мнимую часть

	void Power();													//возвести в степень

	double operator-=(double value);										 //вычитания -= уменьшения значения на величину действительного числа
	Complex_Number& operator +=(const Complex_Number& other);				 //увеличение значения комплекного числа на значение другого
	void operator+(const Complex_Number& other);							 //сумма двух объектов
	void operator*(const Complex_Number& other);						     //произведение двух объектов
	friend ostream& operator<< (ostream& out, const Complex_Number& output); //дружественная функция перегрузки вывода
	friend istream& operator>> (istream& in, Complex_Number& input);		 //дружественная функция перегрузки ввода
};

