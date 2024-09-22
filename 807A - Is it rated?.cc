#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> a(t), b(t);
    bool rated = false, unrated = false;

    for (int i = 0; i < t; i++) {
        cin >> a[i] >> b[i];
        if (a[i] != b[i]) {
            rated = true;
        }
    }

    for (int i = 0; i < t - 1; i++) {
        if (a[i] < a[i + 1]) {
            unrated = true;
            break;
        }
    }

    if (rated) {
        cout << "rated" << endl;
    } 
    else if (unrated) {
        cout << "unrated" << endl;
    } 
    else {
        cout << "maybe" << endl;
    }

    return 0;
}
