#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    //ll n;
    ss binaryCode;
    cin >> binaryCode;

    map<string,int>line;

    for(ii i=0;i<10;i++){
        ss s;
        cin>>s;
        line[s] = i;
    }

    ss password = "";

    for(ii i=0;i<80;i+=10){
        ss block = binaryCode.substr(i,10);
        password += to_string(line[block]);
    }
    
    cout << password << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
