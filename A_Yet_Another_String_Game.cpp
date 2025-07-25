#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() { 
    ss s;  
    cin >> s;
    ii len = s.size();

    for(ii i=0;i<len;i++){
        if(i%2==0){
            if(s[i]=='a'){
                s[i]='b';
            }
            else{
                s[i]='a';
            }
        }
        else{
            if(s[i]=='z'){
                s[i]='y';
            }
            else{
                s[i]='z';
            }
        }
    }

   cout << s << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; 
    while (t--) solve();
    return 0;
}
