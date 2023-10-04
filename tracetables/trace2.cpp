#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    while(a <= b){
         a += 3;
         b -= 2;
         
    }
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}