#include <iostream>

using namespace std;

int main() {
    int start, end, interval;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    cout << "Enter the interval: ";
    cin >> interval;

    for (int i = start; i >= end; i -= interval) {
        cout << i << endl;
    }

    return 0;
}