#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    char c;
    cin >> c;

    if(c>= '0' && c<= '9'){ 
        cout<< "IS DIGIT" << endl;
    }
    else{
        cout<< "ALPHA" << endl;
        if(c>= 'A' && c<= 'Z'){
            cout << "IS CAPITAL" << endl;
        }
        else{
            cout << "IS SMALL" << endl;
        }
    }

    
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
