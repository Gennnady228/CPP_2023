#include <iostream>

using namespace std;

int main()
{
    int x=10,y=15;
    float b=15.0;
    double f=100.0;
    bool a=true;
    cout << "Ðåçóëüòàò óìíîæåíèÿ \n";
    cout << x*y;
    cout << "\n";
    cout << "Ðåçóëüòàò äåëåíèÿ áåç îñòàòêà \n";
    cout << f / x;
    cout << "\n";
    cout << "Ðåçóëüòàò ïîëó÷åíèÿ îñòàòêà \n";
    cout << y % x;
    cout << "\n";
    cout << "Ðåçóëüòàò ñëîæåíèÿ \n";
    cout << x + y;

    return 0;
}
