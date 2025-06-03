#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {
    ll d;
    cin >> d;

    ll years = d / 365;
    ll m = d % 365;

    ll months = m/ 30;
    ll days = m % 30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;;
    cout << days << " days" << endl;;

    

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
