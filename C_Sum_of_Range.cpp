#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ll a,b;
    cin >> a >> b;

    ll low = min(a,b);
    ll high = max(a,b);

    ll n = high - low +1;
    ll sum = n*(high+low)/2;

    ll first_even = (low%2 ==0) ? low : low + 1;
    ll last_even = (high%2 ==0) ? high : high - 1;

    ll sum_even = 0;

    if(first_even<=last_even){
        ll count_Even = ((last_even - first_even)/2) +1;
        sum_even = (count_Even * (first_even+last_even))/2;
    }

    
    cout << sum << endl;
    cout << sum_even << endl;
    cout << sum - sum_even << endl;
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}