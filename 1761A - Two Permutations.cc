#include <bits/stdc++.h>
using namespace std;

bool canDistribute(int n, int a, int b) {
    if ((n == a && n == b) || (a + b + 2 <= n)) {
        return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if (canDistribute(n, a, b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
