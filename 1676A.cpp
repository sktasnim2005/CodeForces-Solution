#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string  ara;
        cin >> ara;
        int sum1 = ara[0] + ara[1] + ara[2];
        int sum2 = ara[3] + ara[4] + ara[5];
        if (sum1 == sum2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
