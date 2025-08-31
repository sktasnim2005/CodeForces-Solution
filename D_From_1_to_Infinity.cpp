#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ll k;
    cin >> k;

    string seq = "";
    ll num = 1;
    while ((ll)seq.size() < k) {
        seq += to_string(num);
        num++;
    }

    ll sum = 0;
    for (int i = 0; i < k; i++) {
        sum += seq[i] - '0';
    }

    cout << sum << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
