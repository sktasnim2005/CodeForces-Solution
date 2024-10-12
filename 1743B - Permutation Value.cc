#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>> t;
        while(t--){
            int n;
            cin >> n;
            cout << 1 << ' ';
            for(int i = n; i > 1; i--){ // i>1 because 1 is printed in the previous line
                cout << i << ' ';
            }

            cout << endl;
        }

        return 0;
}
