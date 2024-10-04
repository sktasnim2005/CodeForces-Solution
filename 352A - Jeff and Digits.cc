#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count5 = 0, count0 = 0;
    
    for (int i = 0; i < n; ++i) {
        int digit;
        cin >> digit;
        if (digit == 5) {
            ++count5;
        } 
        else if (digit == 0) {
            ++count0;
        }
    }
    if (count0 == 0) {
        cout << -1 << endl;
        return 0;
    }

    // If there are less than 9 fives, we cannot form a number divisible by 90
    if (count5 < 9) {
        cout << 0 << endl;
        return 0;
    }

    // Use the maximum number of 5s that is a multiple of 9
    count5 = (count5 / 9) * 9;

    for (int i = 0; i < count5; ++i) {
        cout << 5;
    }

    for (int i = 0; i < count0; ++i) {
        cout << 0;
    }

    cout << endl;
    return 0;
}
