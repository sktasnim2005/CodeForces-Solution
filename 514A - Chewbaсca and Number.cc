#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string x;
    cin >> x;

    for (int i = 0; i < x.length(); i++) {
        if (x[i] > '4') {
            x[i] = '9' - x[i] + '0';
        }
    }

    if (x[0] == '0') {
        x[0] = '9';
    }

    cout << x << endl;
    return 0;
}
