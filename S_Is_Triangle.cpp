#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii a,b,c;
    cin >> a >> b >> c;

    vector<ii> A={a,b,c};

    sort(A.begin(),A.end());

    if(A[0]+A[1] > A[2]){
        cout << "Valid" << endl;
        dd s= (a+b+c)/2.0;
        dd area = sqrt(s*(s-A[0])*(s-A[1])*(s-A[2]));
        cout<< fixed << setprecision(6) << area << endl;
    }
    else{
        cout << "Invalid" << endl;
    }

      
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}