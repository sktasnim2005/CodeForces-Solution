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

    for(ii i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());

    ii sum = accumulate(a.begin(),a.end(),0);

    if(sum==0){
        cout << "NO" << endl;
        return;
    }

    if(sum>0){
        sort(a.rbegin(),a.rend());
    }
   
    cout << "YES" << endl;
    for(ii i=0;i<n;i++){
        cout << a[i] << " ";
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

