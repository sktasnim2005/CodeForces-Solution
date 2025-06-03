#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

//0-3, 1-1, 2-2, 3-1, 5-1
void solve() {
    ii n;
    cin >> n;
    vector<ii>digits(n);
    for(ii i=0;i<n;i++){
        cin >> digits[i];
    }

    map<int, int> required = {{0,3},{1,1},{2,2},{3,1},{5,1}};
    
    map<int, int>count;

    for(ii i=0;i<n;i++){
        count[digits[i]]++;

        bool can = true;
        for(auto[digit,need] : required){
            if(count[digit] < need){
                can = false;
                break;
            }
        }
        if(can){
            cout<< i+1 << endl;
            return;
        } 
    }

    cout<< 0 << endl;
    
   


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
