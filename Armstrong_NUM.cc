#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string

ll int_pow(ll base, ll exp) {
    ll result = 1;
    while (exp--) result *= base;
    return result;
}

void solve() {
    ss s;
    cin >> s;

    int size_s = s.size();
    ll sum = 0;
    for (char c : s) {
        ll digit = c - '0';
        sum += int_pow(digit, size_s);
    }

    cout << (to_string(sum) == s ? "Yes" : "No") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
