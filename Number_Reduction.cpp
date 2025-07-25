#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve(){
    ll x;
    cin >> x;

    while(true){
        if(x>3){
            if(x%2==0){
                x/=2;
            }
            else{
                x-=3;
            }
        }
        else if(x%2==0 && x>1){
            x/=2;
        }
        else{
            break;
        }

    }

    cout << x << endl;
}

    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}
