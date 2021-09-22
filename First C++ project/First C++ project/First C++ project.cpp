#include <iostream>

int main()
{
	int a = 3, b = 2;

	//явное преобразование типа
	double с = (double)a / b;

	std::cout << с << "\n";

	//Ќе€вное преобразование типа
	//ѕреобразу€ double в int тер€ем остаток
	int d = с;

	std::cout << d << "\n";


	return 0;
}