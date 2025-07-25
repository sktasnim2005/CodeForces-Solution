#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii n;
    cin >> n;

    vector<ii> a(n);

    ii even =0,odd=0;

    for(ii i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2 ==0){
            even++;
        }
        else{
            odd++;
        }

    }

    cout << min(even,odd) << endl;    
   
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   // int t; cin >> t; while (t--)
    solve();
    return 0;
}