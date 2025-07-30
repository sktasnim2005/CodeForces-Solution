#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ss x;
    cin >> x;

    char min_dight = '9';

    for(char c : x){
        min_dight = min(min_dight,c);
    }
   
    cout << min_dight << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}