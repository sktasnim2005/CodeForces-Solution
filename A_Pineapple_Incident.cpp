#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    
    ll t,s,x;
    
    cin >> t >> s >> x;


   if(t==x){
    cout << "YES" << endl;
    return;
   }

   if(x < t+s){
    cout << "NO" << endl;
    return;
   }

   if((x-t)%s ==0){
    cout << "YES" << endl;
    return;
   }

   if((x-t-1)%s ==0){
    cout << "YES" << endl;
    return;
   }



   cout << "NO" << endl;




}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   // int t; cin >> t; while (t--) 
    solve();
    return 0;
}
