#include <iostream>

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

int main()
{
    two();

    return 0;
}