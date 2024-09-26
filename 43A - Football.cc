#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s, team1, team2;
    int count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++) {
        cin >> s;
        if (i == 0) {
            team1 = s;
            count1++;
        }
        else if (s == team1) {
            count1++;
        }
         else if (team2 == "") {
            team2 = s;
            count2++;}
        else if (s == team2) {
                count2++;
            }
        }

    if (count1 > count2) {
        cout << team1 << endl;
    } else {
        cout << team2 << endl;
    }

    return 0;
}
