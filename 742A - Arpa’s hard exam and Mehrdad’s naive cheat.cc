#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[4] = {8, 4, 2, 6};

    if (n == 0) {
        cout << 1 << endl; // 1378^0 = 1
    }
    else {
        cout << a[(n - 1) % 4] << endl;
    }

    return 0;
}
