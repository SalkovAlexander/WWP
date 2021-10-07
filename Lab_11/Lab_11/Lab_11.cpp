#include <iostream>
#include <Windows.h>

int one()
{
    int A, B;
    A = 8;
    B = 10;

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
    A = 5;
    B = 5;
    C = 5;

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
    double A, B, C;
    A = 12;
    B = 9;
    C = 7;

    if (abs(A - B) < abs(A - C))
    {
        std::cout << "B " << abs(A - B) << "\n\n";
    }
    else
    {
        std::cout << "C " << abs(A - C) << "\n\n";
    }

    return 0;
}

int four()
{
    double X, Y;
    X = -10;
    Y = -2;

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
    int A = -44;

    std::cout <<"A - ";

    if (A == 0)
    {
        std::cout << "нулевое число" << "\n\n";
    }
    else
    {
        if (A > 0)
        {
            std::cout << "положительное ";
        }
        else
        {
            std::cout << "отрицательное ";
        }

        if (A % 2 == 0)
        {
            std::cout << "четное число" << "\n\n";
        }
        else
        {
            std::cout << "нечетное число" << "\n\n";
        }
    }

    return 0;
}

int six()
{
    int A = 999;

    std::cout << "A - ";

    if (A % 2 == 0)
    {
        std::cout << "четное ";
    }
    else
    {
        std::cout << "нечетное ";
    }

    if (A / 10 == 0)
    {
        std::cout << "однозначное число" << "\n\n";
    }
    else
    {
        if (A / 10 < 10)
        {
            std::cout << "двузначное число" << "\n\n";
        }
        else
        {
            std::cout << "трехзначное число" << "\n\n";
        }
    }

    return 0;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    return 0;
}