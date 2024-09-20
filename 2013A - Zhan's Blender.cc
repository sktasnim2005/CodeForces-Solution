#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int* n = new int;
        int* x = new int;
        int* y = new int;

        cin >> *n;
        cin >> *x >> *y;

        int p = min(*x, *y);
        int count = *n / p;
        if (*n % p != 0) {
            count++;
        }
        cout << count << endl;

        delete n;
        delete x;
        delete y;
    }
    return 0;
}
