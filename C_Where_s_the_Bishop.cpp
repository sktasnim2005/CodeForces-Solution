#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    vector<vector<char>>a(8,vector<char>(8));
    

    for(ii i =0;i<8;i++){
        for(ii j =0;j<8;j++){
            cin >> a[i][j];
        }        
    }

    for(ii i =1;i<7;i++){
        for(ii j =1;j<7;j++){
            if(a[i][j]=='#' && a[i-1][j-1]=='#' && a[i-1][j+1]=='#' && a[i+1][j-1]=='#' && a[i+1][j+1]=='#'){
                cout << i+1 << " " << j+1 << endl;
                return;  
            }
        }        
    }

        
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}