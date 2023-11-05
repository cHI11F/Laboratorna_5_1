#include <iostream>
#include <cmath>
using namespace std;

double h(const double x, const double y); // прототип

int main()
{
    double p, q;

    cout << "p = "; cin >> p;
    cout << "q = "; cin >> q;

    double d = sqrt(abs(p - q) + (1 + (q * q) - (p * p)) * (1 + (q * q) - (p * p)));

    cout << "d = " << d << endl;
    return 0;
}

double h(const double x, const double y) // визначення
{
    return (pow(y, 2) - sqrt(pow(x, 2) + pow(y, 2))) / (1.0 + pow(x, 2) + pow(y, 2));
}
