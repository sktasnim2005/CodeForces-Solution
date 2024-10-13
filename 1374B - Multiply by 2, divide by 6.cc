#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int steps = 0;
        bool possible = true;

        while (n > 1) {
            if (n % 6 == 0) {
                n /= 6;
            } else if (n % 3 == 0) {
                n *= 2;
            } else {
                possible = false;
                break;
            }
            steps++;
        }

        if (possible && n == 1) {
            cout << steps << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}
