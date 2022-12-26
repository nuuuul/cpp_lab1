#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Complex_Number
{
private:
	double real_part, imaginary_part;								//�������������� �����, ������ �����
public:
	Complex_Number();												//����������� �� ���������
	Complex_Number(double real_part, double imaginary_part);		//����������� � �����������
	Complex_Number(const Complex_Number& other);					//����������� �����������
	~Complex_Number();												//����������

	void Set_real();												//��������� �������������� �����
	void Set_imaginary();											//��������� ������ �����
	double Get_real();												//������� �������������� �����
	double Get_imaginaty();											//������� ������ �����

	void Power();													//�������� � �������

	double operator-=(double value);										 //��������� -= ���������� �������� �� �������� ��������������� �����
	Complex_Number& operator +=(const Complex_Number& other);				 //���������� �������� ����������� ����� �� �������� �������
	void operator+(const Complex_Number& other);							 //����� ���� ��������
	void operator*(const Complex_Number& other);						     //������������ ���� ��������
	friend ostream& operator<< (ostream& out, const Complex_Number& output); //������������� ������� ���������� ������
	friend istream& operator>> (istream& in, Complex_Number& input);		 //������������� ������� ���������� �����
};

