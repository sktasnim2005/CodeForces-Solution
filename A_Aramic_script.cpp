#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string


void solve() {
    ii n;
    cin >> n;

    set<ss>unique;

    while(n--){
        ss word;
        cin>> word;

        map<char,int> count_letter;
        for(char c: word){
            count_letter[c]++;
        }

        ss x;
        for(auto& y: count_letter){
            x+= y.first;
        }

        unique.insert(x);

    }
    
    cout << unique.size() << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
