#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() { 
    dd a,b;
    int n;  
    cin >> a >> b >> n;

    dd min_Time = INT_MAX;

    for(ii i=0;i<n;i++){
        dd x,y,v;
        cin >> x >> y >> v;
        
        dd distance = sqrt((a-x)*(a-x) + (b-y)*(b-y));
        dd time = distance/v;

        if(time<min_Time){
            min_Time = time;
        }
    }

   
    cout << fixed << setprecision(20) << min_Time << endl;
    
   

        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
