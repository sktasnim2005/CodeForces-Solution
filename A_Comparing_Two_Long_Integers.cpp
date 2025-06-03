#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string


void solve() {
    ss a,b;
    cin >> a >> b;

    if(a.size() > b.size()){
        b = string(a.size() - b.size(),'0') + b;
    }
    
    if(a.size() < b.size()){
        a = string(b.size() - a.size(),'0') + a;
    }


    if(a==b) cout<< "=" <<endl;
    else if(a>b) cout<< ">" <<endl;
    else cout<< "<" <<endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
