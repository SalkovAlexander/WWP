#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x1, y1;
	double  x2, y2;
	double x3, y3;

	double A, C, B;

	//1
	std::cout << "����� ���������� ����� ����� ������� � ��������� ������������. \n";
	std::cout << "������� 4 ���������� ����� ������ � ����: x1, y1, x2, y2 \n";

	std::cin >> x1 >> y1 >> x2 >> y2;

	double dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	std::cout << "���������� ����� ����� ������� � ��������� ������������ = "<< dist << "\n\n";

	//2
	std::cout << "���� ��� ����� A, B, C �� �������� ���. ����� ����� �������� AC � BC � �� �����.\n";
	std::cout << "������� 3 ���������� ����� �� �������� ��� ����� ������� � ����: A, B, C.\n";

	std::cin >> A >> B >> C;

	double AC = abs(A - C);
	double BC = abs(B - C);
	double ACBC = AC + BC;


	std::cout << "����� ������� �� = " << AC << " ����� ������� �� = " << BC << " ����� �� � �� = " << ACBC << "\n\n";

	//3
	std::cout << "���� ��� ����� A, B, C �� �������� ���. ����� C ����������� ����� ������� A � B.\n����� ������������ ���� �������� AC � BC.\n";
	std::cout << "������� 3 ���������� ����� �� �������� ��� ����� ������� � ����: A, B, C.\n";

	std::cin >> A >> B >> C;

	AC = abs(A - C);
	BC = abs(B - C);


	std::cout << "������������ ���� �������� AC � BC = " << AC * BC << "\n\n";

	//4
	std::cout << "���� ���������� ���� ��������������� ������ ��������������: (x1, y1), (x2, y2).\n������� �������������� ����������� ���� ���������.\n";
	std::cout << "������� 4 ���������� ����� ������ � ����: x1, y1, x2, y2 \n";

	std::cin >> x1 >> y1 >> x2 >> y2;

	double edge_x = abs(x2 - x1);
	double edge_y = abs(y2 - y1);

	double S = edge_x * edge_y;
	double P = (edge_x + edge_y) * 2;

	std::cout << "�������� �������������� = " << P << " ������� ����� = " << S << "\n\n";

	//5
	std::cout << "���� ���������� ���� ������ ������������: (x1, y1), (x2, y2), (x3, y3).\n";
	std::cout << "������� 6 ��������� ����� ������ � ����: x1, y1, x2, y2, x3, y3\n";

	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	double side_1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	double side_2 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	double side_3 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));

	P = side_1 + side_2 + side_3;
	
	double p = P / 2;
	S = sqrt(p * (p - side_1) * (p - side_2) * (p - side_3));

	std::cout << "������� ������������ = " << S << " �������� ������������ = " << P << "\n\n";
}


