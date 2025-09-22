#include <iostream>
using namespace std;

void printPattern(int N) {
    int num = 1;
    for (int row = 1; row <= N; ++row) {
        for (int col = 0; col < row; ++col) {
            cout << num << " ";
            ++num;
        }
        cout << "*" << endl;
    }
}

int main() {
    int N = 5; // You can change this to any number of rows you like
    printPattern(N);
    return 0;
}

