#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int time_one_oven = ((n + k - 1) / k) * t;

    int t1 = 0;
    int t2 = d;

    int cakes_baked = 0;

    while (cakes_baked < n) {
        if (t1 <= t2) {
            // First oven bakes cakes
            t1 += t;
            cakes_baked += k;
        } else {
            // Second oven bakes cakes
            t2 += t;
            cakes_baked += k;
        }
    }

    int time_two_ovens = max(t1, t2);

    if (time_two_ovens < time_one_oven) {
        cout << "YES" << endl;
    }
     else {
        cout << "NO" << endl;
    }

    return 0;
}
