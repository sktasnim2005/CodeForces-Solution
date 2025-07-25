#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {
    ll l1,b1,l2,b2,l3,b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

    if(l1+l2+l3 == b1 && b1 == b2 && b2 == b3){ 
        cout << "YES" << endl; 
    }
    else if(b1+b2+b3 == l1 && l1 == l2 && l2 == l3){ 
        cout << "YES" << endl;
    }
    else if(l2+l3 == l1 && b2 == b3 && b1+b2 == l1){ 
        cout << "YES" << endl;
    }
    else if(b2+b3 == b1 && l2 == l3 && l1+l2 == b1){ 
        cout << "YES" << endl;
    }

    else cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
