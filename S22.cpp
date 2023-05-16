#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int n=1, out=0;
    ifstream reading("output.txt");
    while (reading >> out){
        cout << n++ << ")" << out << '\n';
    }
    reading.close();
    return 0;
}
