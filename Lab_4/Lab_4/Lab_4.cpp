#include <iostream>
#include <cstdio>
#include <windows.h>

//Мутим кириллицу
#pragma execution_character_set( "utf-8" )

int main()
{
	//Мутим кириллицу
	SetConsoleOutputCP(65001);


	//Пункт 1
	double a = 0, b = 0;

	std::cout << "Первый пункт" << "\n";
	std::cout << "Введите первое число" << "\n";
	std::cin >> a;
	std::cout << "Введите второе число" << "\n";
	std::cin >> b;

	double S = a * b;
	double P = 2 * (a + b);

	std::cout << "Прямоугольник со сторонами " << a << " и " << b << ". P = " << P << " S = " << S << "\n\n";

	//Пункт 2
	double d = 0;
	double Pi = 3.14;

	std::cout << "Второй пункт" << "\n";
	std::cout << "Введите число" << "\n";
	std::cin >> d;

	double L = Pi * d;
	std::cout << "Длина окружности L = " << L << "\n\n";

	//Пункт 3
	double A = 0, B = 0;

	std::cout << "Третий пункт" << "\n";
	std::cout << "Введите первое число" << "\n";
	std::cin >> A;
	std::cout << "Введите второе число" << "\n";
	std::cin >> B;

	double mid = (A + B) / 2;
	std::cout << "Среднее среднее арифметическое значение " << a << " и " << b << " = " << mid << "\n\n";

	//Пункт 4
	double x = 0, y = 0;

	std::cout << "Четвертый пункт" << "\n";
	std::cout << "Введите первое число отличное от нуля" << "\n";
	
	while (x == 0)
	{
		std::cin >> x;
	}

	std::cout << "Введите второе число отличное от нуля" << "\n";

	while (y == 0)
	{
		std::cin >> y;
	}

	x = x * x;
	y = y * y;

	std::cout << "Числа " << x << " и " << y << ". Сумма = " << x + y << " разность = " << x - y << " произведение = " << x * y << " частное квадратов = " << x * x - y * y << "\n\n";

	//Пункт 5
	double X = 0, Y = 0;

	std::cout << "Пятый пункт" << "\n";
	std::cout << "Введите первое число отличное от нуля" << "\n";

	while (X == 0)
	{
		std::cin >> X;
	}

	std::cout << "Введите второе число отличное от нуля" << "\n";

	while (Y == 0)
	{
		std::cin >> Y;
	}

	X = abs(X);
	Y = abs(Y);

	std::cout << "Числа " << X << " и " << Y << ". Сумма = " << X + Y << " разность = " << X - Y << " произведение = " << X * Y << " частное квадратов = " << X * Y - X * Y << "\n\n";
}
