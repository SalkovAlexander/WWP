﻿#include <iostream>
#include <Windows.h>

using namespace std;

int one()
{
	int alpha;

	std::cout << "1. Дано значение угла альфа в градусах (0 < альфа < 360).\nОпределить значение этого же угла в радианах, учитывая, что 180 градусов = Пи радианов." << "\n";
	std::cout << "Введите целое значение градусов" << "\n";

	std::cin >> alpha;

	int Pi = 180;

	int a = alpha;
	int b = Pi;

	//Алгоритм Евклида
	while (a != 0 and b != 0)
	{
		if (a > b)
		{
			a = a % b;
		}
		else
		{
			b = b % a;
		}
	}

	int nod = a + b;

	std::cout << "Мера угла альфа в радианах = " << alpha / nod << " Pi / " << Pi / nod << "\n\n";
	
	return 0;
}
// Доделать второе!!!
int two()
{
	int x, y;

	std::cout << "Дано значение угла альфа в радианах (0 < альфа < 2·π).\nОпределить значение этого же угла в градусах, учитывая, что 180◦ = Пи радианов." << "\n";
	std::cout << "Введем значение угла альфа в радианах в виде: x Pi / y, где x и y - целые числа, неравные нулю.\n 0 <= x <= 360, 1 <= y <= 180\n Нужно ввести значения коэффицентов x и y.\n";
	
	return 0;
}

int three()

{
	double X, A, Y;
	std::cout << "X киллограмм конфет стоят A  рублей" << "\n";
	std::cout << "Введем значение X и A (цена конфет)\n";

	std::cin >> X >> A;

	std::cout << "Цена 1 кг конфет = " << A / X << "\n";

	std::cout << "Введите число кг конфет, чтобы узнать цену\n";

	std::cin >> Y;

	std::cout << Y << " килограмма конфет стоят " << Y * (A / X) << "\n\n";
	
	return 0;
}

int four()
{
	double V1, V2, S, T;

	double S_final;

	std::cout << "Скорость первого автомобиля V1 км/ч, второго — V2 км/ч, расстояние между ними S км.\nОпределить расстояние между ними через T часов, если автомобили удаляются друг от друга.\n";
	std::cout << "Введите V1, V2, S и T через пробел\n";

	std::cin >> V1 >> V2 >> S >> T;

	S_final = abs(V1 * T - V2 * T) + S;

	std::cout << "Расстояние между автомобилями равно " << S_final << " км." << "\n\n";

	return 0;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	four();
}
