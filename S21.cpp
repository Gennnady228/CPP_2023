#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int A, B;
cout << "������� ����� A = ";
cin >> A;
cout << "����� B ������ ���� ������ ����� A" << endl << "������� ����� B = ";
cin  >> B;
    while (B < A)
        {
            cout << "����� B ������ ���� ������ ����� A" << endl;
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

