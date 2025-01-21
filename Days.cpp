#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "---Choice one No from 1 to 7 to see you're day---" << endl;
    cout << "Enter day No:" << endl;
    cin >> day;

    switch (day) {
    case 1:
        cout <<day<< "  that's day is Monday" << endl;
        break;
    case 2:
        cout <<day<< "  that's day is Tuesday" << endl;
        break;
    case 3:
        cout <<day<< "  that's day is Wednesday" << endl;
        break;
    case 4:
        cout <<day<< "  that's day is Thursday" << endl;
        break;
    case 5:
        cout <<day<< "  that's day is Friday" << endl;
        break;
    case 6:
        cout <<day<< "  that's day is Saturday" << endl;
        break;
    case 7:
        cout <<day<< "  that's day is Sunday" << endl;
        break;
    default:
        cout << "No that day Choice.1-7 please!" << endl;
    }
    return 0;
}