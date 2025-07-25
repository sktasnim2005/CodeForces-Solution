#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

ii n;
vector<ll>A;
ll total =0;

void SUM(ii i){
    if(i ==n) return;
    total +=A[i];
    SUM(i+1);
}

void solve() {    
    cin >> n;

    A.resize(n);

    for(ii i=0;i<n;i++){
        cin>>A[i];
    }

    SUM(0);

    cout << total << endl;    
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
