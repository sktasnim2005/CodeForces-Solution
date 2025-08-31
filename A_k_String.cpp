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

    map<char, ll> mapp;

    for(char c : s){
        mapp[c]++;
    }

    ll first_count = -1;
    bool same = true;

    for(auto& [ch,count] : mapp){
        if(count%n !=0){
            cout << -1 << endl;
            return;
        }
    }


    ss ans ="";
    for(auto& [ch,count] : mapp){
        ans += string(count/n, ch);
    }
    
    for(ll i = 0;i<n;i++){
        cout << ans;
    }
    cout << endl;
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}
