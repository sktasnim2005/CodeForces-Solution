#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x;
    cin >> x;
    int count = 0;

    while (x > 0) {
        if (x % 2 != 0) {
            count++;
        }
        x /= 2;
    }


    cout << count << endl;


    return 0;
}
