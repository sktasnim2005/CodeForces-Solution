#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii n;
    cin >> n;

    vector<ii>a(n);

    ii sum =0;

    for(ii i=0;i<n;i++){
        cin >> a[i];
        if(i%2==0)sum +=a[i];
        else sum -=a[i];
    }
    
    
    cout << sum << endl;
    

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
