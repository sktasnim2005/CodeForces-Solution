#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii n,m;
    cin >> n >> m;

    ii start= min(n,m);
    ii end  = max(n,m);
    ii sum=0;

    for(ii i=start+1;i<end;i++){
        if(i%2!=0){
            sum+=i;
        }
    }

    cout << sum << endl;
    
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}
