#include <iostream>

double pow(double num, int pow)
{
	double r = num;
	int i;
	for (i = 1; i < pow; i++)
	{
		r *= num;
	}

	return r;
}


int main()
{
	double A, B, C;
	double temp1, temp2;

	//1
	A = 10, B = 4;
	
	temp1 = A;
	A = B;
	B = temp1;

	std::cout << A << " " << B << "\n\n";

	//2
	A = 18, B = 9, C = 87;

	temp1 = B;
	B = A;
	temp2 = C;
	C = temp1;
	A = temp2;

	std::cout << A << " " << B << " " << C << "\n\n";

	//3
	A = 44, B = 3, C = 65;
	temp1 = C;
	C = A;
	temp2 = B;
	B = temp1;
	A = temp2;

	std::cout << A << " " << B << " " << C << "\n\n";

	//4
	double y, x = 2;


	y = 3.0 * pow(x, 6) - 6.0 * pow(x, 2) - 7;

	std::cout << y << "\n\n";

	//5
	x = 4;

	y = 4 * pow(x - 3, 6) - 7 * (x - 3, 3) + 2;

	std::cout << y << "\n\n";

	//6
	int a = 2;

	int powa = a * a;

	std::cout << powa * powa * powa * powa << "\n\n";

	//7
	a = 2;

	powa = a * a;
	int powpowa = powa * powa;

	std::cout << powpowa * powpowa * powpowa * a * a * a<< "\n\n";
}