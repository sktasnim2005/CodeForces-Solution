#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ii n;
    cin >> n;

    if(n%7==0){
        cout << n << endl;
        return;
    }
    
    ii x=-1,y=-1;
    bool can =true;
    for(ii i=1;i<991;i++){
        ii low = n-i;
        ii high = n+i;

        if(low >10 && low%7==0 && x == -1){
            x = low;                
        }
        if(high%7==0 && y==-1){
            y = high;               
        }
        
        if(x != -1 || y != -1){
            break;
        }
    }

    if(x== -1) cout << y << endl;
    else if(y== -1) cout << x << endl;
    else cout << (abs(n-x) <= abs(n-y) ? x : y) << endl;  
    


    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
