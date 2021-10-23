#include <iostream>
#include <string>

int Out(int num1, int num2)
{
    switch (num1)
    {
        case 1:
            std::cout << "Первое";
        case 2:
            std::cout << "Второе";
        case 3:
            std::cout << "Третье";
        case 4:
            std::cout << "Четвертое";
        case 5:
            std::cout << "Пятое";
        case 6:
            std::cout << "Шестое";
        case 7:
            std::cout << "Седьмое";
        case 8:
            std::cout << "Восьмое";
        case 9:
            std::cout << "Девятое";
        case 10:
            std::cout << "Десятое";
        case 11:
            std::cout << "Одинадцатое";
        case 12:
            std::cout << "Двенадцатое";
        case 13:
            std::cout << "Тринадцатое";
        case 14:
            std::cout << "Четырнадцатое";
        case 15:
            std::cout << "Пятнадцатое";
        case 16:
            std::cout << "Шестнадцатое";
        case 17:
            std::cout << "Семнадцатое";
        case 18:
            std::cout << "Восемнадцатое";
        case 19:
            std::cout << "Девятнадцатое";
        case 20:
            std::cout << "Двадцатое";
        case 21:
            std::cout << "Двадцать первое";
        case 22:
            std::cout << "Двадцать второе";
        case 23:
            std::cout << "Двадцать трелье";
        case 24:
            std::cout << "Двадцать четвертое";
        case 25:
            std::cout << "Двадцать пятое";
        case 26:
            std::cout << "Двадцать шестое";
        case 27:
            std::cout << "Двадцать седьмое";
        case 28:
            std::cout << "Двадцать восьмое";
        case 29:
            std::cout << "Двадцать девятое";
        case 30:
            std::cout << "Тридцатое";
        case 31:
            std::cout << "Тридцать первое";
        default:
            std::cout << "Ошибка в воде числа!";
    }

    switch (num2)
    {
        case 1:
            std::cout << "января";
        case 2:
            std::cout << "февраль";
        case 3:
            std::cout << "марта";
        case 4:
            std::cout << "апреля";
        case 5:
            std::cout << "мая";
        case 6:
            std::cout << "июня";
        case 7:
            std::cout << "июля";
        case 8:
            std::cout << "августа";
        case 9:
            std::cout << "сентября";
        case 10:
            std::cout << "октября";
        case 11:
            std::cout << "ноября";
        case 12:
            std::cout << "декабря";
        default:
            std::cout << "Ошибка в воде месяца!";
    }
}

int one()
{
    int D, M;
    D = 24;
    M = 9;

    Out(D, M);


    return 0;
}

int two()
{


    return 0;
}

int main()
{
    one();

    return 0;
}