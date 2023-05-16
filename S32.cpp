#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[100];
    int len = strlen(str);
    char* ptr = str;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; i < len; i++) {
        if (*ptr >= 'a' && *ptr < 'z') {
            *ptr = *ptr + 1;
        }
        else if (*ptr == 'z') {
            *ptr = 'a';
        }
        else if (*ptr >= 'A' && *ptr < 'Z') {
            *ptr = *ptr + 1;
        }
        else if (*ptr == 'Z') {
            *ptr = 'A';
        }
        ptr++;
    }
    cout << "New string: " << str;
    return 0;





