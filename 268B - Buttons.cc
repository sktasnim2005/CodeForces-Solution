#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += (n - i) * i;
    }

    cout << sum + n << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = n;

    for (int i = 1; i <= n; i++) {
        sum += (n - i) * i;
    }

    cout << sum  << endl;
    return 0;
}
