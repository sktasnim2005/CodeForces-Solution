#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ii n,m;
    ss a,b,c;    
    cin >> n >> a >> m >> b >> c  ;


    for(ii i=0;i<c.size();i++){
        if(c[i]=='V'){
            a = b[i] + a;
        }
        if(c[i]=='D'){
            a = a + b[i];
        }
    }


   cout << a << endl;



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
