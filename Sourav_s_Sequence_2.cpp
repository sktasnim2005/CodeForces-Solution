#include <bits/stdc++.h>
using namespace std;

bool matches(long long m, const vector<int>& p) {
    int n = p.size();
    for (int i = 0; i < n; ++i) {
        if (__builtin_popcountll(m + i) != p[i])
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }

        bool found = false;
        const long long LIMIT = 1e6;

        for (long long m = 0; m <= LIMIT; ++m) {
            if (matches(m, p)) {
                found = true;
                break;
            }
        }

        cout << (found ? "YES" : "NO") << '\n';
    }

    return 0;
}



/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        long long m = 0;

        for (int i = 0; i < n; ++i) {
            int pi;
            cin >> pi;
            m += (1LL << pi); // 2^pi
        }

        if (__builtin_popcountll(m) != n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        bool ok = true;
        set<int> used;

        for (int i = 0; i < n; ++i) {
            cin >> p[i];
            if (used.count(p[i])) {
                ok = false;
            }
            used.insert(p[i]);
        }

        if (!ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
*/


/*
#include <bits/stdc++.h>
using namespace std;

int OneBitCount(long long m) {
    return (m == 0) ? 0 : ((m & 1) + OneBitCount(m >> 1));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> input(n);
        for (int i = 0; i < n; ++i)
            cin >> input[i];

        const int MAX_START = 1e6;
        bool found = false;

        for (long long m = 0; m <= MAX_START; ++m) {
            bool ok = true;
            for (int j = 0; j < n; ++j) {
                if (OneBitCount(m + j) != input[j]) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                found = true;
                break;
            }
        }

        cout << (found ? "YES" : "NO") << '\n';
    }

    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAX_CHECK = 1e6 + 10; // try up to 10^6 for m
vector<int> bitCount;

void precompute() {
    bitCount.resize(MAX_CHECK);
    for (int i = 0; i < MAX_CHECK; ++i) {
        bitCount[i] = __builtin_popcountll(i);
    }
}

bool checkSequence(vector<int> &pattern) {
    int n = pattern.size();
    for (int start = 0; start + n <= MAX_CHECK; ++start) {
        bool ok = true;
        for (int i = 0; i < n; ++i) {
            if (bitCount[start + i] != pattern[i]) {
                ok = false;
                break;
            }
        }
        if (ok) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    precompute();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> pattern(n);
        for (int i = 0; i < n; ++i) cin >> pattern[i];

        if (checkSequence(pattern)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

*/