#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    ii n;
    ss password;
    cin >> password >> n;

    bool found = false;
    bool first_match = false;
    bool last_match  = false;

    for(ii i=0;i<n;i++){
        ss word ;
        cin >>  word ;
        if(word == password) found = true;
        if(word[1] == password[0]) first_match = true;
        if(word[0] == password[1]) last_match = true;

    }

    

    if(found || (first_match && last_match)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
