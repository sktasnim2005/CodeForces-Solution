#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ii n;
    ss s;
    cin>> n >> s;
    ss ans = "";
    for(ii i=n-1; i>=0; i--) {
        if(s[i]=='0') {
            string sub = s.substr(i-2,2);
            int temp = stoi(sub);
            char t = 96+temp;
            ans = t + ans;
            i -= 2;
        }
        else {
            char t = (96+s[i]-'0');
            ans =  t + ans;
        }
    }
 
    cout << ans << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
