#include <iostream>
using namespace std;

void printPattern(int n) {
    int num = n; // Start from the given number

    for (int i = 1; num > 0; i++) {
        for (int j = 0; j < i && num > 0; j++) {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the starting number: ";
    cin >> n;

    printPattern(n);

    return 0;
}
