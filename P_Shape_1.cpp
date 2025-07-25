#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {   
    ii n;
    cin >> n;

    for(ii i=0;i<n;i++){
        for(ii j=n;j>i;j--){
            cout <<"*";
        }
        cout<<endl;
    }

        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
