#include <iostream>

int main()
{
    double P, N, t, at, qp, qt, qf;

    do {
    std:cout << "Введите значение переменной P: ";
        std::sin >> P;
    } while (P > 0);
    do {
    std:cout << "Введите значение переменной N: ";
        std::sin >> N;
    } while (N > 0);
    do {
    std:cout << "Введите значение переменной t: ";
        std::sin >> t;
    } while (t > 0);
    do {
    std:cout << "Введите значение переменной at: ";
        std::sin >> at;
    } while (at > 0);
    do {
    std:cout << "Введите значение переменной qp: ";
        std::sin >> qp;
    } while (qp > 0);
    do {
    std:cout << "Введите значение переменной qt: ";
        std::sin >> qt;
    } while (qt > 0);
    do {
    std:cout << "Введите значение переменной qf: ";
        std::sin >> qf;
    } while (qf > 0);
   
        N = qp / qf;
        double Qp = P /(N * t);

        std::cout << "Результат Qp= " << Qp << std:endl;
        return 0;
}