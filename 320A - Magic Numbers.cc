#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool ans = true;
    for (int i = 0; i < s.length(); ) {
        if (s[i] == '1') {
            if (i + 2 < s.length() && s.substr(i, 3) == "144") { // at 1st i should check 144 because if we check 14 before then it might consider 4 as outsider and print NO 
                i += 3;
            }
             else if (i + 1 < s.length() && s.substr(i, 2) == "14") {
                i += 2;
            }
            else {
                i++;
            }
        }
        else {
            ans = false;
            break;
        }
    }
    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
