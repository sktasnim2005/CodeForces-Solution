#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string Out = "hello";
    int x = 0,y=0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == Out[x]) {
            x++;
            y++;

        }
    }

    if (y == Out.length()) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
