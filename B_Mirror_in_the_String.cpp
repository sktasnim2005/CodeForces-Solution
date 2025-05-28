#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ii n;
    ss s;
    cin >> n >> s;

    ss prefix;
    prefix += s[0];

    for(ii i=1;i<n;i++){
        if(s[i] > s[i-1]) break;
        if(s[i] == s[i-1] && i == 1) break;
        else prefix += s[i];
    }

    ss reverse_prefix = prefix;
    reverse(reverse_prefix.begin(),reverse_prefix.end());

    cout<< prefix + reverse_prefix << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;while (t--)
     solve();
    return 0;
}
