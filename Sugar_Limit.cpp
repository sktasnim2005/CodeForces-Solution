#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {
    ii n;
    cin >> n;

    vector<ii> a(n),b(n);

    for(ii i=0;i<n;i++){
        cin >> a[i]; 
    } 
    for(ii i=0;i<n;i++){
        cin >> b[i]; 
    }

    ii max_Sat = 0;
    for(ii L = 0;L<=100;L++){
        ii sum =0;
        for(ii i=0;i<n;i++){
            if(b[i]<=L && a[i]>0){
                sum += a[i];
            }
        }
        max_Sat = max(max_Sat,sum-L);
    }

    cout << max_Sat  << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    
    return 0;
}
