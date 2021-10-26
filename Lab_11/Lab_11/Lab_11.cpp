#include <iostream>
#include <Windows.h>
#include <cmath>

int one()
{
    int A, B;

    std::cout << "1. ���� ��� ���������� ������ ����: A � B. ���� �� �������� �� �����, �� ��������� ������ ���������� ������� �� ���� ��������, � ���� �����, �� ��������� ���������� ������� ��������. ������� ����� �������� ���������� A � B." << "\n";
    std::cout << "������� A, B" << "\n";

    std::cin >> A >> B;

    if (A != B)
    {
        if (A > B)
        {
            B = A;
        }
        else
        {
            A = B;
        }
    }
    else
    {
        A = 0;
        B = 0;
    }

    std::cout << A << " " << B << "\n\n";

    return 0;
}

int two()
{
    double A, B, C;

    std::cout << "2. ���� ��� �����. ����� ����� ���� ���������� �� ���" << "\n";
    std::cout << "������� A, B, C" << "\n";

    std::cin >> A >> B >> C;

    if (A >= B and C >= B)
    {
        std::cout << A + C << "\n\n";
    }
    else
    {
        if (A >= C and B >= C)
        {
            std::cout << A + B << "\n\n";
        }
        else
        {
            if (B >= A and C >= A)
            {
                std::cout << B + C << "\n\n";
            }
        }
    }



    return 0;
}

int three()
{
    double xA, yA, xB, yB, xC, yC;

    std::cout << "3. �� ��������� ����������� ��� �����: A, B, C. ����������, ����� �� ���� ��������� ����� (B ��� C) ����������� ����� � A, � ������� ��� ����� � �� ���������� �� ����� A." << "\n";
    std::cout << "������� ���������� ����� A, B, C � ���� xA, yA, xB, yB, xC, yC" << "\n";

    std::cin >> xA >> yA >>  xB >> yB >> xC >> yC;
    
    if (sqrt((xA - xB)*(xA - xB) + (yA - yB)* (yA - yB)) < sqrt((xA - xC)* (xA - xC) + (yA - yC)* (yA - yC)))
    {
        std::cout << "B " << sqrt((xA - xB)* (xA - xB) + (yA - yB)* (yA - yB)) << "\n\n";
    }
    else
    {
        std::cout << "C " << sqrt((xA - xC)* (xA - xC) + (yA - yC)* (yA - yC)) << "\n\n";
    }

    return 0;
}

int four()
{
    double X, Y;

    std::cout << "4. ���� ���������� �����, �� ������� �� ������������ ���� OX � OY. ���������� ����� ������������ ��������, � ������� ��������� ������ �����" << "\n";
    std::cout << "������� X, Y" << "\n";

    std::cin >> X >> Y;

    if (X > 0)
    {
        if (Y > 0)
        {
            std::cout << "I" << "\n\n";
        }
        else
        {
            std::cout << "IV" << "\n\n";
        }
    }
    else
    {
        if (Y > 0)
        {
            std::cout << "II" << "\n\n";
        }
        else
        {
            std::cout << "III" << "\n\n";
        }
    }

    return 0;
}

int five()
{
    int A;

    std::cout << "5. ���� ����� �����. ������� ��� ������-�������� ���� �������������� ������ �����, �������� �����, �������������� �������� ����� � �. �." << "\n";
    std::cout << "������� A" << "\n";

    std::cin >> A;

    std::cout <<"A - ";

    if (A == 0)
    {
        std::cout << "������� �����" << "\n\n";
    }
    else
    {
        if (A > 0)
        {
            std::cout << "������������� ";
        }
        else
        {
            std::cout << "������������� ";
        }

        if (A % 2 == 0)
        {
            std::cout << "������ �����" << "\n\n";
        }
        else
        {
            std::cout << "�������� �����" << "\n\n";
        }
    }

    return 0;
}

int six()
{
    int A;

    std::cout << "6. ���� ����� �����, ������� � ��������� 1�999. ������� ��� �������������� ���� ������� ���������� �����, ��������� ����������� ����� � �. �." << "\n";
    std::cout << "������� �" << "\n";

    std::cin >> A;

    std::cout << "A - ";

    if (A % 2 == 0)
    {
        std::cout << "������ ";
    }
    else
    {
        std::cout << "�������� ";
    }

    if (A / 10 == 0)
    {
        std::cout << "����������� �����" << "\n\n";
    }
    else
    {
        if (A / 10 < 10)
        {
            std::cout << "���������� �����" << "\n\n";
        }
        else
        {
            std::cout << "����������� �����" << "\n\n";
        }
    }

    return 0;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    one();
    two();
    three();
    four();
    five();
    six();

    return 0;
}