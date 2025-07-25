#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve(){
    ss s;
    cin >> s;

    int length =  s.size();
    cout << "len = " << length;

    ss r="";

    for(int i=length;i>0;i--){
        r+= s[i] ;
    }
    for(int i=length;i>0;i--){
        cout << s[i] << endl ;
    }
    

    
   
}

    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
  //  int t; cin >> t; while (t--)
    solve();
    return 0;
}
