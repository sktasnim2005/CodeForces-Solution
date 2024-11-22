#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    if (s[0] == s[s.size() - 1]){
        cout << s << endl;
    }
    else{
        s[0] = s[s.size()-1];
        cout << s << endl;
    }
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
