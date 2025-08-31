#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ll n,k;
    cin >> n >> k;

    ll count =0;

    while(n>0){
        if(n%k ==0){
            n/=k;
            count++;
        }
        else{
            count += n%k;
            n -= n%k;
        }
        //else{
        //    n--;
        //    count++;
        //}
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
