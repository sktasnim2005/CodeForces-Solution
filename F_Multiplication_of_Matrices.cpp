#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii rA,cA;
    cin >> rA >> cA;

    ii A[rA][cA];

    for(ii i=0; i<rA;i++){
        for(ii j=0;j<cA;j++){
            cin>>A[i][j];
        }
                
    }

    ii rB,cB;
    cin >> rB >> cB;

    ii B[rB][cB];

    for(ii i=0; i<rB;i++){
        for(ii j=0;j<cB;j++){
            cin>>B[i][j];
        }
    }

    ii C[rA][cB];

    for(ii i=0; i<rA;i++){
        for(ii j=0;j<cB;j++){
            C[i][j] = 0;
            for(ii k=0;k<cA;k++){
                C[i][j] += (A[i][k])*(B[k][j]);
            }
        }              
    }

    for(ii i=0; i<rA;i++){
        for(ii j=0;j<cB;j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
      
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}