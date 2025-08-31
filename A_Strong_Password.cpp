#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ss s;
    
    cin >> s ;
 
    ii l = s.size();

    ss ans ="";

    bool done = false;

    for(ll i=0;i<l;i++){
        ans += s[i];

        if(l==1 && !done){
            if(s[i]>'a'){
                ans += 'a';
            }
            else{
                ans += 'b';
            }

            done = true; 
        }

        if(!done && i<l-1 && s[i] == s[i+1]){
            if(s[i]>'a'){
                ans += 'a';
            }
            else{
                ans += 'b';
            }

            done = true;
        }
    }

    if(!done){
        if(s[l-1]>'a'){
                ans += 'a';
            }
            else{
                ans += 'b';
            }
    }
    
    
    cout << ans << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
