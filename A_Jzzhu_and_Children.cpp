#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii n,m;
    cin >> n >> m;

    vector<ii>a(n);
    ii lastChild = -1;
    ii maxRound = -1;

    for(ii i=0;i<n;i++){
        cin>> a[i];
        ii rounds = ceil((double)a[i]/m);
        if(rounds >= maxRound){
            maxRound = rounds;
            lastChild = i; 
        }
    }

    cout << lastChild + 1 << endl;

    
   
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}