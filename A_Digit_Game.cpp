#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() { 
    int n;  
    ss s;
    cin >> n >> s;
    // If n is odd:
    //   -> The last digit will come from an odd position.
    //   -> So, if there is at least one odd digit at an odd position, Raze can win.
    //
    // If n is even:
    //   -> The last digit will come from an even position.
    //   -> So, if there is at least one even digit at an even position, Breach can win.
    //
    // If the condition fails, then the other player wins.
    
    
    if(n%2 == 1){
        bool raze =false;
        for (ii i = 0; i < n; i += 2) {
                if ((s[i]-'0') % 2 == 1) {
                    raze = true;
                    break;
                }
            }
        cout << (raze ? 1:2) << endl;
    }
    else{
        bool brece =false;
        for (ii i = 1; i < n; i += 2) {
                if ((s[i]-'0') % 2 == 0) {
                    brece = true;
                    break;
                }
            }
        cout << (brece ? 2:1) << endl;
    }

        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}
