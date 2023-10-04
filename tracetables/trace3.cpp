#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 3;
    int z = 10;
    
    while(x < z){
        x = x + y;
        y++;
        z = z - 2;
    }
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    return 0;
}