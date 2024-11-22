#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;

    if (str[0] == str[str.size() - 1]){
        cout << str << endl;
    }
    else{
        str[0] = str[str.size()-1];
        cout << str << endl;
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
