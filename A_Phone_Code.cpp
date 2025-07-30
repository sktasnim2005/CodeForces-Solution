#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {
    ii n;
    cin >> n;
    vector<ss> number(n);

    for(ii i=0;i<n;i++){
        cin >> number[i];
    }

    ss pre_fix = number[0];

    for(ii i=1;i<n;i++){
        ii j=0;
        while(j< pre_fix.size() && j<number[i].size() && pre_fix[j] == number[i][j]){
            j++;
        }
        pre_fix = pre_fix.substr(0,j);
        if(pre_fix.empty()){
            break;
        } 
    }

   
    cout << pre_fix.size() << endl;
    

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}
