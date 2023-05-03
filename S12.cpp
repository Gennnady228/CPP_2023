#include <iostream>

using namespace std;

int main()
{
    int a=1;
    int x=0;
    while (a<=1000)
    {
        if (a % 7 ==0)
            {
              x= x+a;
              cout<< x << endl;
            }
        a= a + 4;
    }
    cout << "Finals\n" << x ;
    return 0;
}
