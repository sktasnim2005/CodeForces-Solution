#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, r;
        cin >> n >> s >> r;

        int Max = s - r ;
        int a[n];
        a[0] = Max ;
        int sum=0;
        for (int i = 1; i < n; i++) {
            a[i]=1;
            sum+=a[i];
        }

    for (int i = 1; i < n; i++) {
            while (sum < r && a[i] < 6 && a[i]<Max) {
                a[i]++;
                sum++;
            }
            if(a[i]>Max){
              a[i]--;
              a[i+1]++;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

