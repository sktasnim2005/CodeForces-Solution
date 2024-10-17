#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char a[8][8];
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> a[i][j];
            }
        }

        bool Allred=false;
        for (int i = 0; i < 8; i++) {
            bool red=true;
            for (int j = 0; j < 8; j++) {
                if (a[i][j] != 'R') {
                    red=false;
                    break;
                }
            }
                if(red){
                  Allred=true;
                  break;
                }
            }

        if (Allred) {
            cout << 'R' << endl;
        }
        else {
            cout << 'B' << endl;
        }
    }
    return 0;
}
