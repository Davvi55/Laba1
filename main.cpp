// ConsoleApplication17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Complex.h"
#include <iostream>

using namespace std;


int main()
{
	Complex z1, z2;
	setlocale(LC_ALL, "Russian");
	char a;
		system("cls");
		cout << "1.Калькулятор\n" << "2.Выйти" << endl;

		cin >> a;
		switch (a)
		{
		case '1':
			system("cls");
			cout << "Введите действительное и мнимое первого числа: " << endl;
			cin >> z1.real >> z1.imag;
			cout << "Введите действительное и мнимое второго числа: " << endl;
			cin >> z2.real >> z2.imag;
			cout << "Что сделать?\n1.Сложить\n2.Вычесть\n3.Умножить\n4.Делить\n";
			cin >> a;
			switch (a) {
			case '1': z1.plus(z1, z2); 
				break;
			case '2': z1.minus(z1, z2);
				break;
			case '3': z1.um(z1, z2);
				break;
			case '4': z1.del(z1, z2);
				break;
			default: 
				break;
			}
			cout << "\nДля продолжения нажмите любую клавишу" << endl;
			break;
		case '2':
			exit(1);
			break;
		default:
			break;
		}
}

