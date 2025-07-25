#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() { 
    ii n;  
    cin >> n;

    unordered_set<int>seen;
    vector<int>result;

    for(ii i=0;i<n;i++){
        for(ii j=0;j<n;j++){
            ii x;
            cin >> x;
            if (seen.find(x)==seen.end()){
                seen.insert(x);
                result.push_back(x);
            }
        }
    }
    
    ii missing =-1 ;
    for(ii i=1;i<=2*n;i++){
        if(seen.find(i)==seen.end()){
            missing=i;
            break;
        }
    }

    cout << missing <<" ";

    for(ii x: result){
        cout << x << " ";
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
