#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    if (m % n != 0) {
        cout << -1 << endl;
        return 0;
    }

    long long d = m / n;
    int moves = 0;

    while (d % 2 == 0) {
        d /= 2;
        moves++;
    }

    while (d % 3 == 0) {
        d /= 3;
        moves++;
    }

    if (d != 1) {
        cout << -1 << endl;
    }
    else {
        cout << moves << endl;
    }

    return 0;
}
