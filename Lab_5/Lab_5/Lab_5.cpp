#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x1, y1;
	double  x2, y2;
	double x3, y3;

	double A, C, B;

	//1
	x1 = 1, y1 = 6.6;
	x2 = 8, y2 = 15.3;

	double dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	std::cout << dist << "\n\n";

	//2
	A = 3, C = 7, B = 15;

	double AC = C - A;
	double BC = B - C;
	double ACBC = AC + BC;

	std::cout << AC << " " << BC << " " << ACBC << "\n\n";

	//3
	A = 3, C = 7, B = 15;

	AC = C - A;
	BC = B - C;


	std::cout << AC * BC << "\n\n";

	//4
	x1 = 0, y1 = 0;
	x2 = 2, y2 = 2;

	double edge_x = x2 - x1;
	double edge_y = y2 - y1;

	double S = edge_x * edge_y;
	double P = (edge_x + edge_y) * 2;

	std::cout << S << " " << P << "\n\n";

	//5
	x1 = 0, y1 = 0;
	x2 = 0, y2 = 5;
	x3 = 5, y3 = 0;

	double side_1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	double side_2 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	double side_3= sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));

	P = side_1 + side_2 + side_3;
	
	double p = P / 2;
	S = sqrt(p * (p - side_1) * (p - side_2) * (p - side_3));

	std::cout << S << " " << P << "\n\n";
}