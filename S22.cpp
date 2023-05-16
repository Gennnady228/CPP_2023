#include <iostream>
using namespace std;

int main() {
    int num;
    string numbers[10] = {"zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};

    cout << "Vvedite chislo: ";
    cin >> num;

    if (num >= 0 && num <= 9){
        cout << "Nazvanie chisla: " << numbers[num];
    }
    else{
        cout << "Wrong number!";
    }
    return 0;
}
