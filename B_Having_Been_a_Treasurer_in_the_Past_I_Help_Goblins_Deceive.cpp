#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ll n;
    ss s;
    cin >> n >> s;

    ll countDash = 0, countUnderscore = 0;
    for(char c:s){
        if(c == '-') countDash++;
        else countUnderscore++;
    }

    if(countDash <0 || countUnderscore ==0){
        cout << 0 << endl;
        return;
    }

    ll left = countDash/2;
    ll right = countDash - left;
    ll result = countUnderscore*left*right;
    
    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}
