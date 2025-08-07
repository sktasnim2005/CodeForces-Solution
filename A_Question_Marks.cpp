#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ii n;
    ss s;
    cin >> n >> s;

    ii countA=0,countB=0,countC=0,countD=0;
   
    for(char c :s){
        if(c=='A') countA++;
        if(c=='B') countB++;
        if(c=='C') countC++;
        if(c=='D') countD++;
    }

    cout << min(n,countA)+min(n,countB)+min(n,countC)+min(n,countD) << endl;   

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
