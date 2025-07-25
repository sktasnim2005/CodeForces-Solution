#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {   
    while(true){
        ii n,m;
        cin >> n >> m;
        
        if(n <= 0 || m <= 0) break;

        ii start= min(n,m);
        ii end  = max(n,m);
        ii sum=0;

        for(ii i=start;i<=end;i++){
            cout << i << " ";
            sum += i;
        }

        cout << "sum =" << sum << endl;
    }
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   // int t; cin >> t; while (t--)
    solve();
    return 0;
}
