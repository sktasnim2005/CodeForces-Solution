#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int ans = -1;
        for (int i = 1; i <= 6; i++) {
          if (x.find(s) != -1) {
            ans = i - 1;
            break;
          }
          x += x;
        }
        cout<<ans<<endl;
    }
    return 0;
}



// another way 


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

       bool ans =false;
        for (int i = 0; i < 6; i++) {
            if (x.find(s) != string::npos) {
                cout << i << endl;
                ans=true;
                break;
            }
            x += x;
        }
       if(!ans)cout << -1 << endl;
    }
    return 0;
}

