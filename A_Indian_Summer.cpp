#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    
    ii n;
    cin >> n;

    //map<pair<ss, ss>, ii> mapp;
    set<pair<ss, ss>> sett;

    for(ii i=0;i<n;i++){
        ss x,y;
        cin >> x >> y;

        sett.insert({x,y});
    }
    

    cout << sett.size() << endl;   
       


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   // int t; cin >> t; while (t--) 
    solve();
    return 0;
}
