#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> bills(n);
    for (int i = 0; i < n; ++i) {
        cin >> bills[i];
    }

    int count25 = 0, count50 = 0;
    bool possible = true;

    for (int bill : bills) {
        if (bill == 25) {
            count25++;
        } 
        else if (bill == 50) {
            if (count25 > 0) {
                count25--;
                count50++;
            }
             else {
                possible = false;
                break;
            }
        } 
        else { // bill == 100
            if (count50 > 0 && count25 > 0) {
                count50--;
                count25--;
            } 
            else if (count25 >= 3) {
                count25 -= 3;
            } 
            else {
                possible = false;
                break;
            }
        }
    }

    cout << (possible ? "YES" : "NO") << endl;

    return 0;
}
