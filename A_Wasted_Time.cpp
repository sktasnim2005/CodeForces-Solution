#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii n,k;
    cin >> n >> k;

    vector<pair<ii,ii>>points(n);
    
    for(ii i=0;i<n;i++){
        ii x,y;
        cin >> x >> y;
        points[i]= {x,y};
    }

    dd total = 0;
    for(ii i=1;i<n;i++){
        ii dx = points[i].first - points[i-1].first;
        ii dy = points[i].second- points[i-1].second;
        total += sqrt((dx)*(dx)+(dy)*(dy));
    }

    dd time = (total*k)/50.0;

    cout << fixed << setprecision(9) <<  time << endl;
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}