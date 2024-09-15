#include <iostream>
using namespace std;

int main() {
    long long k, n;
    cin >> k >> n;

    long long odd_count = (k + 1) / 2;

    if (n <= odd_count) {
        cout << 2 * n - 1 << endl;
    } else {
        cout << 2 * (n - odd_count) << endl;
    }

    return 0;
}
