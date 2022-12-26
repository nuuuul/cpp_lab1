#include "Complex_Number.h"



//����������� �� ���������
Complex_Number::Complex_Number(): Complex_Number(0, 0)
{
	cout << "������ ����������� �� ���������" << endl;
}

//����������� � �����������
Complex_Number::Complex_Number(double real, double imaginary) : real_part(real), imaginary_part(imaginary) 
{
	cout << "������ ����������� � �����������" << endl;
}

//����������� �����������
Complex_Number::Complex_Number(const Complex_Number& other)
{
	cout << "������ ����������� �����������" << endl;
	(*this) = other;
}

//����������
Complex_Number::~Complex_Number()
{
	cout << "������ ����������" << endl;
}

//��������� real_part
void Complex_Number::Set_real()
{
	cout << "������� ��������� �������������� ����� �����" << endl;
	cout << "������� �������������� ����� �����" << endl;
	cin >> real_part;
}

//���������� imaginary_part
void Complex_Number::Set_imaginary()
{
	cout << "������� ��������� ������ ����� �����" << endl;
	cout << "������� ������ �����" << endl;
	cin >> imaginary_part;
}

//����������� ������. �����
double Complex_Number::Get_real()
{
	cout << "������ ����� ����������� �������������� ����� �����" << endl;
	return real_part;
}

//����������� ������ �����
double Complex_Number::Get_imaginaty()
{
	cout << "������ ����� ����������� ������ ����� �����" << endl;
	return imaginary_part;
}

//���������� � �������
void Complex_Number::Power()
{
	cout << "����� ���������� ����� � �������" << endl;
	int power;
	cout << "������� �������" << endl;
	cin >> power;

	double real = this->real_part;
	double imgnry = this->imaginary_part;

	double number_module = sqrt(real * real + imgnry * imgnry);
	double number_arg = atan(imgnry/real);


	cout << "���� ����� � ������� " << power << " == " <<
		pow(number_module, power) * cos(power * number_arg) << " + (" <<
		pow(number_module, power) * sin(power * number_arg) << ")i" << endl;

}

//�������� ��������� ��������������� �����
double Complex_Number::operator-=(double value)
{
	cout << "������� ���������� ��������� -=" << endl;
	real_part -= value;
	return this->real_part;
}

//���������� ���������� �������� ������ ������� �� �������� �������
Complex_Number& Complex_Number::operator+=(const Complex_Number& other)
{
	cout << "������� ���������� += ���� ��������" << endl;
	this->real_part += other.real_part;
	this->imaginary_part += other.imaginary_part;
	return *this;
}

//����� ���� ����������� �����
void Complex_Number::operator+(const Complex_Number& other)
{
	cout << "������� ���������� +" << endl;
	cout << "(" << this->real_part << " + " << this->imaginary_part <<
		"i) + (" << other.real_part << " + " << other.imaginary_part << "i) == " <<
		this->real_part + other.real_part << " + " << this->imaginary_part + other.imaginary_part << "i" << endl;
}

//������������ ���� ����������� �����
void Complex_Number::operator*(const Complex_Number& other)
{
	//z1z2 = (ac-bd)+i(ad+cb)
	cout << "������� ���������� *" << endl;
	double real = (this->real_part * other.real_part) - (this->imaginary_part * other.imaginary_part);
	double img = (this->real_part * other.imaginary_part) + (other.real_part * this->imaginary_part);
	cout << "(" << this->real_part << " + " << this->imaginary_part <<
		"i) * (" << other.real_part << " + " << other.imaginary_part << "i) == " <<
		real << " + (" << img << ")i" << endl;
}



//���������� cout
ostream& operator<<(ostream& out, const Complex_Number& output)
{
	out << "\n���� ����������� ����� == " << output.real_part << " + (" << output.imaginary_part << ")i" << endl;
	return cout;
}

//���������� cin
istream& operator>>(istream& in, Complex_Number& input)
{
	input.Set_real();
	input.Set_imaginary();
	return cin;
}
