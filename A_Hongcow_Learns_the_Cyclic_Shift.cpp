#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string


void solve() {    
    ss s;
    cin >> s;

    set<ss> distinct;
    ii l = s.size();

    for (ii i = 0; i < l; ++i) {
        ss x = s.substr(i) + s.substr(0, i);
        distinct.insert(x);
    }

    cout << distinct.size() << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
