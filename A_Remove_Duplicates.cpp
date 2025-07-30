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

    for(ii &x :a) cin >> x;

    //set<ii>unique;
    //for(ii x: a){
    //    unique.insert(x);
    //}
    //cout << unique.size() << endl;
    //for(ii x: unique){
    //    cout << x << " " ;
    //}
    //cout << endl;
   
    unordered_map<ii,ii>mapp;

    for(ii i=0;i<n;i++){
        mapp[a[i]]=i;
    }

    vector<ii> ans;
    for(ii i=0;i<n;i++){
        if(mapp[a[i]]==i){
            ans.push_back(a[i]);
        }
    }
   
    cout << ans.size() << endl;
    for(ii x: ans){
        cout << x << " " ;
    }
    cout << endl;


    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}