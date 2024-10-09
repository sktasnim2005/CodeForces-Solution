#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, n, S;
        cin >> a >> b >> n >> S;

        // Maximum amount we can use n coins for
        int max_n_coins = min(S / n, a);

        // Remaining amount after using the maximum n coins
        int remaining = S - max_n_coins * n;

        // Check if the remaining amount can be covered by b coins
        if (remaining <= b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
