#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;

    cout << "Enter your weight (kg): ";
    cin >> weight;
    cout << "Enter your height (m): ";
    cin >> height;

    bmi = weight / (height * height);
    cout << "Your BMI is: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    } else if (bmi < 25) {
        cout << "You have a normal weight." << endl;
    } else {
        cout << "You are overweight." << endl;
    }

    return 0;
}