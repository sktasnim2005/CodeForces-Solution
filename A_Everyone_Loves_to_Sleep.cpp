#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii n,H,M;    
    cin >> n >> H >> M;

    ii sleep_time = H*60 + M;
    ii minDiff = 24*60;

    for(ii i=0;i<n;i++){
        ii h,m;
        cin >> h >> m;

        ii alarm_time = h*60 +m;

        ii diff =0;
        if(alarm_time >= sleep_time){
            diff = alarm_time - sleep_time;
        }
        else{
            diff = (24*60 - sleep_time)+alarm_time;
        }
        minDiff = min(minDiff,diff);
    }

  
    cout << minDiff / 60 << " " << minDiff % 60 << endl;
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}
