#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {   
    ii k,s;
    cin >> k >> s;

    ii x=0;

    for(ii i=0;i<=k;i++){
        for(ii j=0;j<=k;j++){
            ii z= s-i-j;
            if(z>=0 && z<=k){
                x++;
            }
        }
    }

    cout << x << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
