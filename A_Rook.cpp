#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ss s;
    cin >> s;

    char col = s[0]; 
    char row = s[1]; 

    for (char c = 'a'; c <= 'h'; ++c) {
        if (c != col){
            cout << c << row << endl;
        } 
    }

    for (char r = '1'; r <= '8'; ++r) {
         if (r != row){
            cout << col << r << endl;
        } 
    }
      
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
