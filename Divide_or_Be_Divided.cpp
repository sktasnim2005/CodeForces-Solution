#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
void solve() {
    
    ll n,x,y;

    cin >> n >> x >> y;

    string s;
    cin >> s;

    ll a = s[x-1] -'0'; 
    ll b = s[y-1] -'0'; 


    if(a==0 || b==0){
        cout << "NO" << endl;
        return;
    }

    cout << (a%b==0 || b%a==0 ? "YES" : "NO") << endl;
    
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}