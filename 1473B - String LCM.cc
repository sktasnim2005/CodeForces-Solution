#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b) { //least common multiple (LCM)
    return (a * b) / __gcd(a, b);//Uses the built-in __gcd function to calculate the greatest common divisor (GCD) of a and b.
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        int m = s1.length();
        int n = s2.length();
        int length_lcm = lcm(m, n);

        // Print the LCM value
        //cout << "LCM of lengths: " << length_lcm << endl;

        // Initializes extended_s1 and extended_s2 to the original strings s1 and s2.
        string extended_s1 = s1;
        string extended_s2 = s2;

       //Extends extended_s1 by concatenating s1 until its length matches length_lcm.

        while (extended_s1.length() < length_lcm) {
            extended_s1 += s1;
        }

      // Similarly extends extended_s2 with s2.
        while (extended_s2.length() < length_lcm) {
            extended_s2 += s2;
        }

        if (extended_s1 == extended_s2) {
            cout << extended_s1 << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}

