#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii n,x;
    cin >> n >> x;
    
    vector<ii>a(n);

    for(ii i=0;i<n;i++){
        cin >> a[i];
    }

    ii buttonUsed = -1;
    for(ii i=0;i<n;i++){
        if(a[i]==1){
            buttonUsed = i;
            break;
        }
    }

    bool can = true;
    for(ii i=0;i<n;i++){
        if(a[i]==1){
            if(buttonUsed == -1 || i-buttonUsed >=x){
                can = false;
                break;
            }
        }
    }

    cout<< (can? "YES" : "NO") << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}

