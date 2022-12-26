#include "Complex_Number.h"



//конструктор по умолчанию
Complex_Number::Complex_Number(): Complex_Number(0, 0)
{
	cout << "Вызван конструктор по умолчанию" << endl;
}

//конструктор с параметрами
Complex_Number::Complex_Number(double real, double imaginary) : real_part(real), imaginary_part(imaginary) 
{
	cout << "Вызван конструктор с параметрами" << endl;
}

//Конструктор копирования
Complex_Number::Complex_Number(const Complex_Number& other)
{
	cout << "Вызван конструктор копирования" << endl;
	(*this) = other;
}

//деструктор
Complex_Number::~Complex_Number()
{
	cout << "Вызван деструктор" << endl;
}

//установка real_part
void Complex_Number::Set_real()
{
	cout << "Вызвана установка действительной части числа" << endl;
	cout << "Введите действительную часть числа" << endl;
	cin >> real_part;
}

//устантовка imaginary_part
void Complex_Number::Set_imaginary()
{
	cout << "Вызвана установка мнимой части числа" << endl;
	cout << "Введите мнимую часть" << endl;
	cin >> imaginary_part;
}

//возвращение действ. части
double Complex_Number::Get_real()
{
	cout << "Вызван метод возвращение действительной части числа" << endl;
	return real_part;
}

//возвращенеи мнимой части
double Complex_Number::Get_imaginaty()
{
	cout << "Вызван метод возвращения мнимой части числа" << endl;
	return imaginary_part;
}

//возведение в степень
void Complex_Number::Power()
{
	cout << "Метод возведения числа в степень" << endl;
	int power;
	cout << "Введите степень" << endl;
	cin >> power;

	double real = this->real_part;
	double imgnry = this->imaginary_part;

	double number_module = sqrt(real * real + imgnry * imgnry);
	double number_arg = atan(imgnry/real);


	cout << "Ваше число в степени " << power << " == " <<
		pow(number_module, power) * cos(power * number_arg) << " + (" <<
		pow(number_module, power) * sin(power * number_arg) << ")i" << endl;

}

//оператор вычитания действительного числа
double Complex_Number::operator-=(double value)
{
	cout << "Вызвана перегрузка оператора -=" << endl;
	real_part -= value;
	return this->real_part;
}

//перегрузка увеличения значения одного объекта на значения другого
Complex_Number& Complex_Number::operator+=(const Complex_Number& other)
{
	cout << "Вызвана перегрузка += двух объектов" << endl;
	this->real_part += other.real_part;
	this->imaginary_part += other.imaginary_part;
	return *this;
}

//сумма двух комплексных чисел
void Complex_Number::operator+(const Complex_Number& other)
{
	cout << "Вызвана перегрузка +" << endl;
	cout << "(" << this->real_part << " + " << this->imaginary_part <<
		"i) + (" << other.real_part << " + " << other.imaginary_part << "i) == " <<
		this->real_part + other.real_part << " + " << this->imaginary_part + other.imaginary_part << "i" << endl;
}

//произведение двух комплексных чисел
void Complex_Number::operator*(const Complex_Number& other)
{
	//z1z2 = (ac-bd)+i(ad+cb)
	cout << "Вызвана перегрузка *" << endl;
	double real = (this->real_part * other.real_part) - (this->imaginary_part * other.imaginary_part);
	double img = (this->real_part * other.imaginary_part) + (other.real_part * this->imaginary_part);
	cout << "(" << this->real_part << " + " << this->imaginary_part <<
		"i) * (" << other.real_part << " + " << other.imaginary_part << "i) == " <<
		real << " + (" << img << ")i" << endl;
}



//перегрузка cout
ostream& operator<<(ostream& out, const Complex_Number& output)
{
	out << "\nВаше комплексное число == " << output.real_part << " + (" << output.imaginary_part << ")i" << endl;
	return cout;
}

//перегрузка cin
istream& operator>>(istream& in, Complex_Number& input)
{
	input.Set_real();
	input.Set_imaginary();
	return cin;
}
