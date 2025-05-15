#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;  
    vector<int>liar(n);
    for(int i=0;i<n;i++){
        cin>>liar[i];
    }

    for(int j=0;j<=n;j++){
        int count=0;
        for(int i=0;i<n;i++){
            if(liar[i]>j){
                count++;
            }
        }
        if(count==j){
            cout<<j<<endl;
            return;
        }
    }
    cout<< -1 << endl;
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}