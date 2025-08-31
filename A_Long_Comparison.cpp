#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    
    ss x1, x2;
    ll p1,p2;
   
    cin >> x1 >> p1 >> x2 >> p2;

    ll a = x1.size() + p1;
    ll b = x2.size() + p2;


     

    if(a > b){ 
        cout << ">" << endl;
    }
    else if(a < b){ 
        cout << "<" << endl;
    }
    else{
        if(x1.size()  > x2.size()){
            x2 += string(x1.size() - x2.size(), '0');
        }
        else if(x1.size()  < x2.size()){
            x1 += string(x2.size() - x1.size(), '0');
        }
        
        if(x1 == x2) cout << "=" << endl;
        else if(x1 > x2) cout << ">" << endl;
        else cout << "<" << endl;
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
