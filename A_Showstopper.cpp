#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ii n;
    cin >> n ;

    vector<ii> a(n+n);

    for(auto& x : a) cin >> x;
    for(auto& x : a) cin >> x;

    sort(a.begin(),a.end());
   

    if(maX_a == a[n-1] && maX_b == b[n-1]){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    
       
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
