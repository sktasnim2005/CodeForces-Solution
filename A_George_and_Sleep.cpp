#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    
    ii h,m,h2,m2;
    char c;
    cin >> h >> c >> m;
    cin >> h2 >> c >> m2;

    ii total_current = h *60 + m;
    ii total_sleep = h2 *60 + m2;
    
    ii bed_time = ((total_current - total_sleep) + (24*60) ) % (24*60);

    ii new_h = bed_time/60;
    ii new_min = bed_time % 60;



    cout << setw(2) << setfill('0') << new_h << ":" << setw(2) << setfill('0') << new_min << endl; 


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   // int t; cin >> t; while (t--) 
    solve();
    return 0;
}
