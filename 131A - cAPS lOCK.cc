#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool all_upper = true;
    bool first_upper = true;


    for (int i = 0; i < s.size(); ++i) {
        if (islower(s[i])) {
            all_upper = false;
        }
        if (i > 0 && islower(s[i])) {
            first_upper = false;
        }
    }

    if (all_upper) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else if (first_upper) {
        s[0] = toupper(s[0]);
        transform(s.begin() + 1, s.end(), s.begin() + 1, ::tolower);
    }

    cout << s;

    return 0;
}
