#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool first = true; 

    for (int i = 0; i < s.length(); ) {
        if (s.substr(i, 3) == "WUB") {
            i += 3;
            if (!first) {
                cout << " ";
            }
        } 
        else {
            cout << s[i];
            i++;
            first = false;
        }
    }

    return 0;
}
