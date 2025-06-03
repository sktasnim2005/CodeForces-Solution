#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
const ss pi = "3141592653589793238462643383279";

void solve() {
    ss s;
    cin >> s;

    ii count_Correct =0;
   
    for(ii i=0; i<s.size(); i++) {
        if(s[i]==pi[i]) {
            count_Correct++;
        }
        else {
            break;
        }
    }
 
    cout << count_Correct << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
