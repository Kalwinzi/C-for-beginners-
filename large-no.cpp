#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;

    if (x > y) {
        cout << x << " is larger than " << y << endl;
    } else if (y > x) {
        cout << y << " is larger than " << x << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }
    return 0;
}