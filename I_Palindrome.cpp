#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


//void solve() {    
//    ss s;
//    cin >> s;
//
//    ss r = s;
//    reverse(r.begin(),r.end());
//
//    r.erase(0,r.find_first_not_of('0'));//removing leading zero
//
//    cout << r << endl;
//
//    cout << ((s== string(s.rbegin(), s.rend()))? "YES" : "NO") << endl;
//
//}

void solve() {    
    ss s;
    cin >> s;

    ii l= s.size();

    ss r = "";
    for(ii i=l-1;i>=0;i++){
      r+=s[i];
    }

    if(s == r){
      cout <<r << endl;
      cout << "YES"<endl;
    }
    else{
      bool found=false;
      for(ii i=0;i<l;i++){
        if(r[0]==)
      }
    }



  

    cout << ((s== r)? "YES" : "NO") << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
  //  int t;cin >> t;while (t--) 
    solve();
    return 0;
}
