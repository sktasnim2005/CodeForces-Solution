#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ii n;
    cin >> n;

    vector<ii> A(n);

    for(ii i=0;i<n;i++){
        ii a,b;
        cin >> a >> b ;
        A[i] = a-b;
    }
   
    sort(A.rbegin(),A.rend());

    ii count =0;

    for(ii x : A){
        if(x > 0){
            count++;
        }
        else{
            break;
        }
    }


    cout << count << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}