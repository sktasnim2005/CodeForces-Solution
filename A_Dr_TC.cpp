#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;  

    int count0 = count(s.begin(), s.end(), '0');
    int count1 = count(s.begin(), s.end(), '1');
    
    cout<< count0 + count1*(n-1) <<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}