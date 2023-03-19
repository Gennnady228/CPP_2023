#include <iostream>

using namespace std;

int main()
{
    int x=10,y=15;
    float b=15.0;
    double f=100.0;
    bool a=true;
    cout << "Результат умножения \n";
    cout << x*y;
    cout << "\n";
    cout << "Результат деления без остатка \n";
    cout << f / x;
    cout << "\n";
    cout << "Результат получения остатка \n";
    cout << y % x;
    cout << "\n";
    cout << "Результат сложения \n";
    cout << x + y;

    return 0;
}
