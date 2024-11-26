#include <iostream>
#include <vector>
using namespace std;

// Function to count differing bits
int countDifferingBits(int a, int b) {
    int count = 0;
    while (a > 0 || b > 0) {
        int bitA = a & 1; // Get the last bit of a
        int bitB = b & 1; // Get the last bit of b
        if (bitA != bitB) {
            count++; // Increment count if bits are different
        }
        a >>= 1; // Right shift a to process next bit
        b >>= 1; // Right shift b to process next bit
    }
    return count;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> players(m + 1);
    for (int i = 0; i <= m; i++) {
        cin >> players[i];
    }

    int fedorArmy = players[m]; // Fedor's army
    int friendsCount = 0;

    for (int i = 0; i < m; i++) {
        if (countDifferingBits(players[i], fedorArmy) <= k) {
            friendsCount++;
        }
    }

    cout << friendsCount << endl;
    return 0;
}



// Another way using XOR




#include <iostream>
#include <vector>
using namespace std;

// Function to count the number of differing bits
int countDifferingBits(int x, int y) {
    int diffBits = x ^ y; // XOR will give us differing bits
    int count = 0;
    while (diffBits) {
        count += diffBits & 1;
        diffBits >>= 1;
    }
    return count;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> players(m + 1);
    for (int i = 0; i <= m; i++) {
        cin >> players[i];
    }

    int fedorArmy = players[m]; // Fedor's army
    int friendsCount = 0;

    for (int i = 0; i < m; i++) {
        if (countDifferingBits(players[i], fedorArmy) <= k) {
            friendsCount++;
        }
    }

    cout << friendsCount << endl;
    return 0;
}

