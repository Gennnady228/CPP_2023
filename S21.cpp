#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int A, B;
cout << "¬ведите число A = ";
cin >> A;
cout << "„исло B должно быть больше числа A" << endl << "¬ведите число B = ";
cin  >> B;
    while (B < A)
        {
            cout << "„исло B должно быть больше числа A" << endl;
            cin >> B;
        }
ofstream output("123.txt");
while (A<= B)
{
    output << A * 3 << endl;
    ++A;
}

return 0;
}

