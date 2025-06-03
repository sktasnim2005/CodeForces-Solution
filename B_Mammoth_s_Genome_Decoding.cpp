#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    if (n % 4 != 0) {
        cout << "===" << endl;
        return 0;
    }

    int target = n / 4;
    map<char, int> count;
    for (char c : s) {
        if (c != '?') count[c]++;
    }

    // If any count exceeds target, it's impossible
    if (count['A'] > target || count['C'] > target || count['G'] > target || count['T'] > target) {
        cout << "===" << endl;
        return 0;
    }

    // Replace '?' with needed nucleotides
    for (char &c : s) {
        if (c == '?') {
            if (count['A'] < target) {
                c = 'A';
                count['A']++;
            } 
            else if (count['C'] < target) {
                c = 'C';
                count['C']++;
            } 
            else if (count['G'] < target) {
                c = 'G';
                count['G']++;
            } 
            else if (count['T'] < target) {
                c = 'T';
                count['T']++;
            }
        }
    }

    cout << s << endl;
    return 0;
}
