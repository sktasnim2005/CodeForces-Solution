#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> option(n);
    vector<int> value(n);
    for (int i = 0; i < n; i++) {
        cin >> option[i] >> value[i];
    }

    int people = 0;

    for (int i = 0; i < n; i++) {
        if (option[i] == "P") {
            people += value[i];
        } 
        else if (option[i] == "B") {
            int seats = value[i];
            if (people < seats) {
                cout << "YES" << endl;
                people=0;
            } 
            else {
                cout << "NO" << endl;
                people -= seats;
            }
        }
    }

    return 0;
}
