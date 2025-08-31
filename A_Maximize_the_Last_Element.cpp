#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ii n;    
    cin >> n;

    vector<ii> a(n),even,odd;

    for(ii i=0;i<n;i++){
        cin >> a[i];
        if(i % 2 ==0 ) even.push_back(a[i]);
        else odd.push_back(a[i]);
    }
    
    ii maxEven = 0;
    if(even.size() >0){
        maxEven = *max_element(even.begin(),even.end());
    }

    cout << maxEven << endl; 


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
