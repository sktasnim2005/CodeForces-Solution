#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() { 
    int n;  
    cin >> n;

    ll max_sum = 0;

    for(ii i=0;i<n;i++){
        ll x,y;
        cin >> x >> y;
        
        max_sum = max(max_sum,x+y);
    }

   
    cout << max_sum << endl;
    
   

        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
