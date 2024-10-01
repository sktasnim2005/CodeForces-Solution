#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n, t;
    cin >> n >> t;
    vector<long long> a(n);
    for (long long i = 1; i < n; ++i) {
        cin >> a[i];
    }

    long long current = 1;
    while (current < t) {
        current += a[current];
    }

    if (current == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
