#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;

    int sum = num1 + num2;

    if (sum % 2 == 0) {
        cout << "Sum is even. The product of the two numbers is: " << num1 * num2;
    } else {
        if (num2 != 0) {
            cout << "Sum is odd. The division of the first number by the second is: " << num1 / num2;
        } else {
            cout << "Sum is odd. Division by zero is undefined.";
        } 
    }
    return 0;
}