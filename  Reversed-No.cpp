#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0, digit;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    cout << "Reversed number: " << reverse << endl;
    return 0;
}