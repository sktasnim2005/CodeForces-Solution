#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    ss s;
    cin >> s;
    ii l= s.size();

    for(ii i=0;i<l-2;i++){
        string p = s.substr(i,3);
        bool foundA = false;
        bool foundB = false;
        bool foundC = false;
        for(char c: p){
            if(c == 'A') foundA = true;
            if(c == 'B') foundB = true;
            if(c == 'C') foundC = true;
        }
        if(foundA && foundB && foundC ){
            cout << "Yes" << endl;
            return;
        }
    }  

    cout << "No" << endl;
       
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
