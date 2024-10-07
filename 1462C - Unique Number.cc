#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findUniqueNumber(int x) {
    if (x > 45) {
        cout << -1 << endl;
        return;
    }

    vector<int> digits;
    for (int i = 9; i >= 1; --i) {
        if (x >= i) {
            digits.push_back(i);
            x -= i;
        }
    }

    if (x > 0) {
        cout << -1 << endl;
    } else {
        reverse(digits.begin(), digits.end());
        for (int digit : digits) {
            cout << digit;
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        findUniqueNumber(x);
    }
    return 0;
}
