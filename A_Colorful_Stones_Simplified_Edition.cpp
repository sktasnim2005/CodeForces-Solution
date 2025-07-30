#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ss s,t;
    cin >> s >> t;
    
    ii index = 0;
    
    for(char c : t){
        if(s[index] == c){
            index++;
        }
    }
   
    cout << index +1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}