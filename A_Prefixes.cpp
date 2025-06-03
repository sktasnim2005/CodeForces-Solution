#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string


void solve() {
    ii n;
    ss s;
    cin >> n >> s;

    ii operations =0;

    for(ii i=0;i<n;i+=2){
        if(s[i]==s[i+1]){
            s[i]= (s[i]=='a')?'b' : 'a';
            operations++;
        }
    }
    
    cout<< operations << endl;
    cout<< s << endl;
    
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
