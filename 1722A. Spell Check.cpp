#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int countT = 0;
        int countI = 0;
        int countM = 0;
        int countU = 0;
        int countR = 0;



        for (char c : s) {
            if (c == 'T') countT++;
            if (c == 'i') countI++;
            if (c == 'm') countM++;
            if (c == 'u') countU++;
            if (c == 'r') countR++;
        }

        if (n==5 &&countT == 1 && countI == 1 && countM == 1 && countU == 1&& countR == 1 ) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
