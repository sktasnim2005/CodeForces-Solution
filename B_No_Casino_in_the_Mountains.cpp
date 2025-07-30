#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {
    ii n,k;
    cin >> n >> k;
    vector<ii> a(n);

    for(ii i=0;i<n;i++){
        cin >> a[i];
    }

    ii count =0;
    ii i =0;

    while(i<= n-k){
        bool can = true;
        for(ii j=0;j<k;j++){
            if(a[i+j] !=0){
                can = false;
                break;
            }
        }

        if(can){
            count++;
            i += k+1;
        }
        else{
            i++;
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
