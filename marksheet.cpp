#include<iostream>
#include<iomanip> // for formatting output
using namespace std;

int main() {
    int rollNo;
    string name;
    float marks[3];
    float total = 0, average;

    cout << "Enter Roll No: ";
    cin >> rollNo;
    cin.ignore(); // clear newline character from input buffer

    cout << "Enter Name: ";
    getline(cin, name);

    // Taking input for each subject individually
    cout << "Enter marks:\n";
    cout << "Subject 1: ";
    cin >> marks[0];
    cout << "Subject 2: ";
    cin >> marks[1];
    cout << "Subject 3: ";
    cin >> marks[2];

    // Calculating total and average
    for (int i = 0; i < 3; ++i)
        total += marks[i];

    average = total / 3;

    // Displaying the marksheet
    cout << "\n------------ MARKSHEET ------------\n";
    cout << left << setw(15) << "Roll No:" << rollNo << endl;
    cout << left << setw(15) << "Name:" << name << endl;
    cout << left << setw(20) << "Subject 1 Marks:" << marks[0] << endl;
    cout << left << setw(20) << "Subject 2 Marks:" << marks[1] << endl;
    cout << left << setw(20) << "Subject 3 Marks:" << marks[2] << endl;
    cout << left << setw(20) << "Total Marks:" << total << endl;
    cout << left << setw(20) << "Average Marks:" << fixed << setprecision(2) << average << endl;
    cout << "-----------------------------------" << endl;

    return 0;
}

