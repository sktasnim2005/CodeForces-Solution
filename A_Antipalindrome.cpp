#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

bool is_palindrome(ss s,ii l){
    for(ii i=0;i< l/2;i++){
        if(s[i]!= s[l-1-i]){
            return false;
        }
    }
    return true;
}

bool all_same(ss s,ii l){
    for(ii i=1;i<l;i++){
        if(s[i]!=s[0]){
            return false;
        }
    }
    return true;
}

void solve() {    
    ss s;
    cin >> s;
    ii l= s.size();

    if(!is_palindrome(s,l)){
        cout << l << endl;
        return;
    }

    if(all_same(s,l)){
        cout << 0 << endl;
    }
    else{
        cout << l-1 <<endl;
    }

    
       
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
