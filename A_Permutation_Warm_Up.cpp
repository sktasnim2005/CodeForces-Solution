#include <iostream>
using namespace std;

int distinct_f_values(int n) {
    return (n * (n + 1)) / 2 - (n / 2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << distinct_f_values(n) << '\n';
    }
    return 0;
}
