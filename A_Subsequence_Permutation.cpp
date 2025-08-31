#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ll n;
    ss s;
    cin >> n >> s;

    ll count =0;

    ss t = s;

    sort(s.begin(),s.end());
    

    for(ll i=0;i<n;i++){
        if(s[i] != t[i]){
            count++;
        }
    }


    cout << count << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
