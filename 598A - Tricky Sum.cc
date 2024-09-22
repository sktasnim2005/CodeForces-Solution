#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;

        long long Sum = n * (n + 1) / 2;

        long long sum2 = 0;
        for(long long i = 1; i <= n; i *= 2) {
            sum2 += i;
        }

        cout << Sum - 2 * sum2 << endl;
    }
    return 0;
}
