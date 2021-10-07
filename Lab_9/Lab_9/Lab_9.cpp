#include <iostream>

int one()
{
    int N = 2364;
    std::cout << N - 60 * (N / 60) << "\n\n";

    return 0;
}

int two()
{
    int K = 1;

    std::cout << K - 7 * (K / 7) << "\n\n";

    return 0;
}

int three()
{
    int K = 14;
    int N = 3;

    std::cout << K - 7 * (K / 7) + N - 1<< "\n\n";

    return 0;
}

int four()
{
    double A, B, C;
    A = 5;
    B = 5;
    C = 2;

    std::cout << (int)(A / C) * (int)(B / C) << " " << A * B - C * C * (int)(A / C) * (int)(B / C) << "\n\n";

    return 0;
}

int five()
{
    int N = 1525;

    std::cout << N / 100 + 1 << "\n\n";

    return 0;
}

int main()
{
    //one();
    //two();
    //three();
    //four();
    five();
}