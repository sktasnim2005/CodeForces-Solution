#include <iostream>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    if ((n & 1) || n == 2) {
        cout << -1 << endl;
    } else {
        n /= 2;

        if (n & 1 && n == 1) {
            cout << -1 << endl;
        } else {
            cout << (n / 3 + (n % 3 != 0 ? 1 : 0)) << " " << n / 2 << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
