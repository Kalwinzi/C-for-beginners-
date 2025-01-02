#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure to store individual information
struct Person {
    string name;
    int age;
    string gender;
};

int main() {
    vector<Person> censusData;
    int numberOfPeople;

    cout << "Welcome to the Census Program!" << endl;
    cout << "Enter the number of people to register: ";
    cin >> numberOfPeople;

    for (int i = 0; i < numberOfPeople; i++) {
        Person person;
        cout << "\nPerson " << i + 1 << ":" << endl;

        // Input name
        cout << "Enter name: ";
        cin.ignore(); // Clear input buffer
        getline(cin, person.name);

        // Input age
        cout << "Enter age: ";
        cin >> person.age;

        // Input gender
        cout << "Enter gender (Male/Female): ";
        cin.ignore(); // Clear input buffer
        getline(cin, person.gender);

        // Add person to census data
        censusData.push_back(person);
    }

    // Display the collected data
    cout << "\nCensus Data:" << endl;
    for (int i = 0; i < censusData.size(); i++) {
        cout << "\nPerson " << i + 1 << ":" << endl;
        cout << "Name: " << censusData[i].name << endl;
        cout << "Age: " << censusData[i].age << endl;
        cout << "Gender: " << censusData[i].gender << endl;
    }

    return 0;
}