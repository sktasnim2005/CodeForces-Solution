#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ii n;
    cin >> n;

    vector<ii>num(n);
    for(ii i=0;i<n;i++){
        num[i] = i+1;
    }

    vector<vector<ii>>permutation;
    ii count =0;

    do{
        permutation.push_back(num);
        count++;
    }
    while(next_permutation(num.begin(),num.end()));

    ii m = min(10,count);
    
    cout << m << endl;
    for(ii i=0;i<m;i++){
        for(ii x : permutation[i]){
            cout << x << " ";
        }
        cout << endl;
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}