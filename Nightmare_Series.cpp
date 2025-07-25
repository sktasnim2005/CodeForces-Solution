#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ll n;
    cin >> n;

    ll even_count = n/2;  
    ll odd_count = n - even_count;  
    
    ll even_sum =  even_count* (even_count+1);
    ll odd_sum = odd_count * odd_count;

    cout << odd_sum - even_sum << endl;
    
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}
