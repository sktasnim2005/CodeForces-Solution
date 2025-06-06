#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    ii n;
    string s;
    cin >> n >> s;

    ss ans = "";
    for(ii i=0;i<n;){
        if(i+2 < n && s[i]=='o' && s[i+1]=='g' && s[i+2]=='o'){
            ans+="***";
            i+= 3;

            while(i+1 < n && s[i]=='g' && s[i+1]=='o'){
                i+=2;
            }
        }
        else{
            ans+=s[i];
            i++;
        }
    }

    cout << ans << endl;
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   // int t;cin >> t;while (t--) 
    solve();
    return 0;
}
