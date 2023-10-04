#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter the second number: ";
    cin >> num2;

    switch(operation)
    {
        case '+':
            cout << "The result is: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "The result is: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "The result is: " << num1 * num2 << endl;
            break;
        case '/':
            //Check if second number is zero as we can't divide by zero
            if(num2 == 0) 
            { 
                cout << "Error! Dividing by zero is not allowed.";
            }
            else 
            { 
                cout << "The result is: " << num1 / num2 << endl; 
            }
            break;
        default:
            // operator is doesn't match any supported operator (+, -, *, /)
            cout << "Error! Unsupported operator.";
            break;
    }

    return 0;
}