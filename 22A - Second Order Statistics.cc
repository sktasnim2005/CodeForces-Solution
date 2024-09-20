#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 2) {
        cout << "NO" << endl;
    } else {
        int* a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        int first = a[0];
        int second = -1;
        for (int i = 1; i < n; i++) {
            if (a[i] != first) {
                second = a[i];
                break;
            }
        }

        if (second == -1) {
            cout << "NO" << endl;
        } else {
            cout << second << endl;
        }

        delete[] a;
    }

    return 0;
}
