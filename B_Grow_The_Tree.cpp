#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii n;
    cin >> n;
    
    vector<ii>a(n);

    for(ii i=0;i<n;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    ll dx=0,dy=0;
    //dx = sum of small sticks, dy = sum of large sticks
    //he squared distance is dx² + dy²

    for(ii i=0;i<n;i++){
        if(i<n/2){
            dx+=a[i];
        }
        else{
            dy+=a[i];
        }
    }

    cout<< dx*dx + dy*dy << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   // int t; cin >> t; while (t--)
    solve();
    return 0;
}

