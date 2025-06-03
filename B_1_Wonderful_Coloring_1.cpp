#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    //ii n;
    ss s;
    cin >> s;

    map<char,int> mapp;

    for(char c:s){
        mapp[c]++;
    }

    ii count_one = 0,count_two = 0;
    for(auto [ch,count] : mapp){
        if(count==1) count_one++;
        else count_two++;
    }

    cout<< count_two + (count_one/2) << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
