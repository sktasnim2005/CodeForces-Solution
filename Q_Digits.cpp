#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {   
    ss s;
    cin >> s;

    reverse(s.begin(),s.end());

    for(ii i=0;i<s.size();i++){
        cout << s[i] << " ";
    }

    cout << endl;
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}
