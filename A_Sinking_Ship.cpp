#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {  
    ii n;cin>>n;  
    ss name, role;
    
    vector<ss> rats, woman_child, mans,captains;

    while(n--){
        ss name, role;
        cin >> name >> role;

        if(role == "rat") {
            rats.push_back(name);
        }
        else if(role ==  "woman" || role == "child") {
            woman_child.push_back(name);
        }
        else if(role ==  "man"){
            mans.push_back(name);
        }
        else if(role ==  "captain") {
            captains.push_back(name);
        }
    }

    for(auto&  x : rats) cout << x << endl;
    for(auto&  x : woman_child) cout << x << endl;
    for(auto&  x : mans) cout << x << endl;
    for(auto&  x : captains) cout << x << endl;
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
