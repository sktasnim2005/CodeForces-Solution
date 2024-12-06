#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int count = 0;
        int totalL = 0;
        bool stop = false; 

        while (n--) {
            string s;
            cin >> s;
            int x = s.size();

            if (!stop && x + totalL <= m) {
                totalL += x;
                count++;
            } 
            else {
                stop = true; 
            }
        }
        cout << count << endl;
    }
    return 0;
}
