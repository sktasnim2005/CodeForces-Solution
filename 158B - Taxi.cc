#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, s;

    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (s == 1) count1++;
        else if (s == 2) count2++;
        else if (s == 3) count3++;
        else if (s == 4) count4++;
    }

    int taxis = count4;

    // Combine groups of size 3 with groups of size 1
    int minThreeOne = min(count3, count1);
    taxis += minThreeOne;
    count3 -= minThreeOne;
    count1 -= minThreeOne;

    // Remaining groups of size 3 each need a separate taxi
    taxis += count3;

    // Groups of size 2 can share a taxi
    taxis += count2 / 2;
    if (count2 % 2 != 0) {
        taxis += 1;
        count1 -= min(count1, 2);
    }

    // Remaining groups of size 1 can fit 4 per taxi
    taxis += count1 / 4;
    if (count1 % 4 != 0) {
        taxis += 1;
    }

    cout << taxis << endl;

    return 0;
}
