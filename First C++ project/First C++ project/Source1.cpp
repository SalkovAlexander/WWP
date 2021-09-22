#include <iostream>

int main()
{
	int a = 3, b = 2;

	//Явное преобразование типа
	double с = (double)a / b;

	std::cout << с << "\n";

	//Неявное преобразование типа
	//Преобразуя double в int теряем остаток
	int d = с;

	std::cout << d << "\n";


	return 0;
}



#include <iostream>

int main()
{
	int a = 0;
	int b = 0;

	std::cout << "Enter int a \n";
	std::cin >> a;

	std::cout << "Enter int b \n";
	std::cin >> b;

	std::cout << "Calculating: a != b - a * b \n";
	/*
	Сначала выполняется оператор умножения, затем оператор вычитания,
	затем оператор “не равно”, в последнюю очередь выполняется оператор простого присвоения
	*/
	int c = a != b - a * b;

	std::cout << "Answer:" << c << "\n";

	return 0;
}