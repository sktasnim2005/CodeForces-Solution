#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    //ii n;
    ss s;
    cin >> s;

    ii size_s = s.size();
    ll sum = 0;  
    for(char c:s){
        ll single_digit = c - '0';
        sum += pow(single_digit,size_s);
    }

    cout<< (to_string(sum)==s ? "YES" :"NO") << endl;

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}

    // 115132219018763992565095597973971522401
    // 0-3
    // 1-7
    // 2-5
    // 3-3
    // 4-1
    // 5-6
    // 6-2
    // 7-4
    // 8-1
    // 9-7