#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    char c;
    cin >> c;


    if(c>= 'A' && c<= 'Z'){
        cout << char(tolower(c)) << endl;
    }
    else{
        cout << char(toupper(c)) << endl;
    } 
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
