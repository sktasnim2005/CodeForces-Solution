#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ii n;
    ss s;
    cin >> n >> s;

    ss ans = "";

    for(char c:s){
        if(c=='U') ans += 'D';
        else if(c == 'D') ans += 'U';
        else ans += c;
    }

    cout<< ans << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
