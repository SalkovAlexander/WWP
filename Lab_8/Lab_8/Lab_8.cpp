#include <iostream>
#include <Windows.h>

int SAA()
{
	std::cout << "|||SALKOVSALKOVSALKOVSALKOVSALKOVSALKOVSALKOVSALKOVSALKOVSALKOVSALKOVSALKOVSALKOVSALKOVSALKOVSALKOVSALKOVSALKOV|||\n";
	std::cout << "|||############################################################################################################|||\n";
	std::cout << "|||ALEXANDERALEXANDERALEXANDERALEXANDERALEXANDERALEXANDERALEXANDERALEXANDERALEXANDERALEXANDERALEXANDERALEXANDER|||\n\n";

	return 0;
}

int One()
{
	int FileWeightBytes;

	std::cout << "��� ������ ����� � ������. ����� ���������� ������ ����������, ������� �������� ������ ����.\n";
	std::cout << "������� ������ ����� � ������\n";

	std::cin >> FileWeightBytes;

	std::cout << "������ ����� = " << FileWeightBytes / 1024 << " ����(�)\n\n";

	return 0;
}

int Two()
{
	int A, B;

	std::cout << "���� ����� ������������� ����� A � B (A > B). �� ������� ����� A ��������� �����������\n��������� ���������� �������� ����� B (��� ���������).\n����� ���������� �������� B, ����������� �� ������� A.\n";
	std::cout << "������ �������� � � � ����� ������\n";

	std::cin >> A >> B;
	
	std::cout << "���������� �������� B, ����������� �� ������� A = " << A / B << "\n\n";

	return 0;
}

int Three()
{
	int A, B;

	std::cout << "���� ����� ������������� ����� A � B (A > B). �� ������� ����� A ��������� �����������\n��������� ���������� �������� ����� B (��� ���������).\n����� ����� ��������� ����� ������� A.\n";
	std::cout << "������ �������� � � � ����� ������\n";

	std::cin >> A >> B;

	std::cout << "����� ��������� ����� ������� A = " << A - A / B * B << "\n\n";

	return 0;
}

int Four()
{
	int Num, Ones, Tens, NewNum;

	std::cout << "���� ���������� �����. ������� �����, ���������� ��� ������������ ���� ��������� �����.\n";
	std::cout << "������� ���������� �����\n";

	std::cin >> Num;

	Ones = Num % 10;
	Tens = Num / 10;

	NewNum = Ones * 10 + Tens;

	std::cout << "����� ����� = " << NewNum << "\n\n";

	return 0;
}

int Five()
{
	int Num, Ones, Tens, Hundreds, NewNum;

	std::cout << "���� ����������� �����. � ��� ���������� ������ ����� ����� � ��������� �� ������. ������� ���������� �����.\n";
	std::cout << "������� ����������� �����\n";

	std::cin >> Num;

	Ones = Num % 100 % 10;
	Tens = Num % 100 / 10;
	Hundreds = Num / 100;


	std::cout << "����� ����� = " << Tens << Ones << Hundreds << "\n\n";

	return 0;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	SAA();
	One();

	SAA();
	Two();

	SAA();
	Three();

	SAA();
	Four();

	SAA();
	Five();

	return 0;
}