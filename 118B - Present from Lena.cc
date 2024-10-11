#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    // Printing the upper part (including the center row)
    for (int i = 0; i <= n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }
        // Print the numbers in ascending order
        for (int j = 0; j < i; j++) {
            cout << j << " ";
        }
        // Print the numbers in descending order
        for (int j = i; j >= 0; j--) {
            cout << j;
            if (j > 0) cout << " ";
        }
        cout << endl;
    }

    // Printing the lower part (excluding the center row)
    for (int i = n - 1; i >= 0; i--) {
        // Print leading spaces
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }
        // Print the numbers in ascending order
        for (int j = 0; j < i; j++) {
            cout << j << " ";
        }
        // Print the numbers in descending order
        for (int j = i; j >= 0; j--) {
            cout << j;
            if (j > 0) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
