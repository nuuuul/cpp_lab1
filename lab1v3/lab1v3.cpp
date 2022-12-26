//Класс Комплексное число
//Поля : действительная часть, мнимая часть
//Методы : возведение комплексного числа в целую степень
//Операторы : вычитания -= уменьшения значения на величину действительного числа, сложения += увеличения значения на величину другого комплексного числа,
//              сложения + двух комплексных, умножения* двух комплексных

#include "Complex_Number.h";


void Menu()
{
    system("cls");      // очистка консоли
    cout << "1. Ввести данные комплексного числа" << endl;
    cout << "2. Вывести данные комплексного числа" << endl;
    cout << "3. Возвести в целую степень" << endl;
    cout << "4. Уменьшить значение на величину действительного числа" << endl;
    cout << "5. Увеличить значения на величину другого комплексного числа" << endl;
    cout << "6. Сложить два комплексных числа" << endl;
    cout << "7. Умножить два комплексных числа" << endl;
    cout << "0. Выход из программы" << endl;

}

int main()
{
	setlocale(LC_ALL, "rus");

    Complex_Number number, number1; //создаем 2 объекта класса Complex_Number
    int choise = 1;        //создаем переменную для выбора в switch
    double value;          //переменная для case 4

    while (choise > 0)
    {
        Menu();
        cin >> choise;
        switch (choise)
        {
        case 1:
            cin >> number;
            system("PAUSE");
            break;

        case 2:
            cout << number;
            system("PAUSE");
            break;

        case 3:
            number.Power();
            system("PAUSE");
            break;

        case 4:
            cout << "на какое число будем уменьшать?" << endl;
            cin >> value;
            number -= value;
            system("PAUSE");
            break;

        case 5:
            cin >> number1;
            number += number1;
            system("PAUSE");
            break;

        case 6:
            cin >> number1;
            number + number1;
            system("PAUSE");
            break;

        case 7:
            cin >> number1;
            number* number1;
            system("PAUSE");
            break;
        }
    }
}