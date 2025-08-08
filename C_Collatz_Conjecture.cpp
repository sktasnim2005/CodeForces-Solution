#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {

    ii n;
    cin >> n ;
    cout << n << " ";

    while(n>=1){
        if(n%2==0){
            cout << n/2 << " ";
            n=n/2;
        }
        else{
            cout << n*3 +1 << " ";
            n=n*3 +1;
        }

        if(n==1){
            cout << endl;
            break;
        }
    }

    

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
