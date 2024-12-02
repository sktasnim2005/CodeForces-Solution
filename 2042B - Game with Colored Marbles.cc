#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        map<int, int> m;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            m[x]++;
        }
        int uniqueE=0,nonUniqueE=0;


        for (auto j : m) {
            if(j.second==1){
               uniqueE++;
            }
            else{
              nonUniqueE++;
            }
        }

        if (uniqueE % 2 == 0) {
            cout<<uniqueE+nonUniqueE<<endl;
        }
        else {
            cout<<(((uniqueE/2)+1)*2 ) + nonUniqueE<<endl;
        }

    }

    return 0;
}
