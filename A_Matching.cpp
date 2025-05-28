#include <bits/stdc++.h>
using namespace std;


void solve() {
    string s;
        cin >> s;
        
        if (s[0] == '0') {
            cout << 0 <<endl;
        }
        else{
            int count = 1;

            for (int i = 0; i < s.size(); ++i) {
                if (s[i] == '?') {
                    if (i == 0) count *= 9; 
                    else count *= 10;    
                }
            }

            cout << count << endl;

        }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;while(t--)
       solve();
    return 0;
}
