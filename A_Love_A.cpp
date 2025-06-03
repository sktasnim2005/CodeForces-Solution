#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string


void solve() {
    ss s;
    cin >> s;
    ii l = s.size();
    ii count_a = count(s.begin(),s.end(),'a');
    
    cout<< min(l,2*count_a -1) << endl;
    
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
