#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, address, city;
    int pin;

    // Accept user input
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your address: ";
    getline(cin, address);

    cout << "Enter your city: ";
    getline(cin, city);

    cout << "Enter your PIN code: ";
    cin >> pin;

    // Display the information
    cout << "\n--- User Details ---\n";
    cout << "Name    : " << name << endl;
    cout << "Address : " << address << endl;
    cout << "City    : " << city << endl;
    cout << "PIN     : " << pin << endl;

    return 0;
}

