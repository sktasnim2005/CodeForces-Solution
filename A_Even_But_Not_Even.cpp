#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

// sum even , count of odd digit even then they are ebne
// 1467 here 2 odd are 1,7 and their sum is 8 which is even so its ebne

void solve() {
    ll n; 
    ss s;
    cin >> n >> s;

    ss result = "";
 
    for (char c: s) {
        if((c-'0')%2 !=0) {
            result+=c;
            if(result.size()==2){
                break;
            }
        }

    }

    if(result.size()==2){
        ll sum = (result[0]-'0')+(result[1]-'0');
        if(sum%2 ==0 ){
            cout << result << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    else{
        cout << -1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}
