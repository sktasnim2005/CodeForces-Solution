#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {
    dd a,b;
    
    cin >> a  >> b;

    if(a == 0 && b == 0) cout << "Origem" << endl;
    if(a == 0 && b != 0) cout << "Eixo Y" << endl;
    if(a != 0 && b == 0) cout << "Eixo X" << endl;


    if(a > 0  &&  b > 0) cout<< "Q1" << endl;

    if(a < 0  &&  b > 0) cout<< "Q2" << endl;

    if(a < 0  &&  b < 0) cout<< "Q3" << endl;

    if(a > 0  &&  b < 0) cout<< "Q4" << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
