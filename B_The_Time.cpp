#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    
    ii h,m,n;
    char c;
    cin >> h >> c >> m;
    cin>> n;

    ii total_min = h*60 +m;
    
    ii now_min = total_min + n;

    now_min = now_min % (24*60); // to keep hour inside 24 hour 

    ii new_h = now_min/60;
    ii new_min = now_min % 60;



    cout << setw(2) << setfill('0') << new_h << ":" << setw(2) << setfill('0') << new_min << endl; 


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   // int t; cin >> t; while (t--) 
    solve();
    return 0;
}
