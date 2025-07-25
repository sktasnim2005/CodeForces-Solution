#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ll a, b, x;
    cin >> a >> b >> x;

    ll low = min(a, b);
    ll high = max(a, b);

    ll first = ((low + x - 1) / x) * x;
    ll last = (high / x) * x;

    ll sum = 0;
    if (first <= last) {
        ll count = ((last - first) / x) + 1;
        sum = count * (first + last) / 2;
    }

    cout << sum << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
