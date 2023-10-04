#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 7;
    for(int i = 0; i<3; i++) {
         x = x + 2;
         y = y + i;
    }
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}