#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ii n,k;
    ss s;
    cin >> n >> k >> s;

    ii curent1 = 0,maX1 = 0 ;

    for(char c: s){
        if(c=='1'){
            curent1 ++;
        }
        else{
            maX1 =max(maX1, curent1);
            curent1=0;
        }
    }

    maX1 = max(maX1, curent1);

    if(maX1 >=k){
        cout << "NO" << endl;
        return;
    }


    ii low =1, high = n;
    vector<ii> ans(n);

    for(ii i=0;i<n;i++){
        if(s[i]=='0') ans[i] = high--;
        else ans[i] = low++;
    }

    cout << "YES" << endl;
    for(ll i=0;i<n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;

   

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
