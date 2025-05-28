#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ll s;

    cin >> s;

    ll root = sqrt(s);

    if(root * root == s){
        if(root ==0){
            cout<< 0 << " " << 0 << endl;
        }
        else{
            cout<< root-1 <<" " << 1<<endl;
        }
    } 
    else{
        cout<< -1 << endl;
    }
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;while (t--)
     solve();
    return 0;
}
