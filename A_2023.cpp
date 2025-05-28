#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int

void solve() {
    ii n,k;
    cin >> n >> k;
    ll total = 1;

    for(ii i=0;i<n;i++){
        ii x;
        cin>>x;
        total*=x;
    }

    ll target = 2023;
    if(target%total != 0){
        cout<< "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    for(ii i=0;i<k-1;i++){
        cout<< "1 ";
    }
    cout<< target/total<< endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;while (t--)
     solve();
    return 0;
}
