#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    ss s;
    cin >> s;

    if (count(s.begin(), s.end(), s[0]) == s.size()) {
            cout << -1 << endl;
            return;    
    }

    sort(s.begin(), s.end());


    cout << s << endl;
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
