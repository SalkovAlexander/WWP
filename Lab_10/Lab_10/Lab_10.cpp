#include <iostream>
#include <Windows.h>

int one()
{
    int A, B;
    A = 10;
    B = 32;

    if (A > 2 and B <= 3)
    {
        std::cout << "Справедливы" << "\n\n";
    }
    else
    {
        std::cout << "Не справедливы" << "\n\n";
    }

    return 0;
}

int two()
{
    int A, B, C;
    A = 22;
    B = 54;
    C = 5;

    if (A < B and B < C)
    {
        std::cout << "Справедливы" << "\n\n";
    }
    else
    {
        std::cout << "Не справедливы" << "\n\n";
    }

    return 0;
}

int three()
{
    int A = 98;

    if (A % 2 == 0 and A / 10 >= 1 and A / 10 <= 9)
    {
        std::cout << "Высказывание истинно" << "\n\n";
    }
    else
    {
        std::cout << "Высказывание ложно" << "\n\n";
    }

    return 0;
}

int four()
{
    int A = 147;

    if (A % 10 < A % 100 / 10 and A % 100 / 10 < A / 100 or A % 10 > A % 100 / 10 and A % 100 / 10 > A / 100)
    {
        std::cout << "Высказывание истинно" << "\n\n";
    }
    else
    {
        std::cout << "Высказывание ложно" << "\n\n";
    }

    return 0;
}

int five()
{
    int A = 2332;

    if (A % 10 == A / 100 / 10 and A % 100 / 10 == A / 100 % 10)
    {
        std::cout << "Высказывание истинно" << "\n\n";
    }
    else
    {
        std::cout << "Высказывание ложно" << "\n\n";
    }

    return 0;
}

int six()
{
    int a, b, c;
    a = 3;
    b = 4;
    c = 5;

    if ((a * a + b * b) == c * c or (b * b + c * c) == a * a or (c * c + a * a) == b * b)
    {
        std::cout << "Высказывание истинно" << "\n\n";
    }
    else
    {
        std::cout << "Высказывание ложно" << "\n\n";
    }

    return 0;
}

int seven()
{
    int a, b, c;
    a = 10;
    b = 5;
    c = 6;

    if (a + b > c and b + c > a and c + a > b)
    {
        std::cout << "Высказывание истинно" << "\n\n";
    }
    else
    {
        std::cout << "Высказывание ложно" << "\n\n";
    }

    return 0;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    return 0;
}