#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    ii n;
    cin >> n;
    vector<ii>A(n);

    for(ii i=0;i<n;i++){
       cin>>A[i];
    }

    ii even=0,odd=0,positive=0,negative=0;

    for(ii i=0;i<n;i++){
       if(A[i]%2==0) even++;
       if(A[i]%2!=0) odd++;
       if(A[i] > 0) positive++;
       if(A[i] < 0) negative++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;

    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
