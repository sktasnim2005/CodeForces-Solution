#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ii n;
    ss s;
    cin >> n >> s;
    transform(s.begin(),s.end(), s.begin(), :: tolower);

    for(char c: s){
        if(c != 'm' && c!= 'e' && c!= 'o' && c!= 'w'){
           cout<< "NO" << endl;
           return;
        }
    }

    ss compressed = "";
    compressed += s[0];

    for(ii i=1; i<n; i++) {
        if(s[i] != s[i-1]){
            compressed+=s[i];
        }
    }

    bool can =false;

    if(compressed=="meow"){
        can = true;
    }

    cout << (can ? "YES" : "NO") << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
