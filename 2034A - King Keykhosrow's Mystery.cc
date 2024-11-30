#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << lcm(a, b) << endl;
    }

    return 0;
}





// Another way

#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << lcm(a, b) << endl;
    }

    return 0;
}
