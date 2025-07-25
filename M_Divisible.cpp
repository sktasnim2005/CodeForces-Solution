#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ss n;
    ll x;
    cin >> n >> x;



              //     আমরা এখানে n নাম্বারটা ধাপে ধাপে ভাগ করছি x দিয়ে।
              //🔸 (c - '0') মানে হলো চরিত্র (digit character) থেকে আসল সংখ্যায় রূপান্তর করা।
              //
              //🔸 উদাহরণ দিয়ে বলি:
              //ধরো n = "1234" এবং x = 5
              //
              //শুরুতে rem = 0
              //
              //প্রথম ডিজিট 1 → rem = (0*10 + 1) % 5 = 1
              //
              //দ্বিতীয় ডিজিট 2 → rem = (1*10 + 2) % 5 = 12 % 5 = 2
              //
              //তৃতীয় ডিজিট 3 → rem = (2*10 + 3) % 5 = 23 % 5 = 3
              //
              //চতুর্থ ডিজিট 4 → rem = (3*10 + 4) % 5 = 34 % 5 = 4
              //
              //শেষে rem = 4 → মানে 1234 % 5 = 4 → divisible নয়।


    ll rem = 0;
    for (char c : n) {
        rem = (rem * 10 + (c - '0')) % x;
    }

    cout << (rem == 0 ? "YES" : "NO") << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
