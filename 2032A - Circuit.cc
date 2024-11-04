#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(2 * n);
        int count1 = 0,count0=0;

        for (int i = 0; i < 2 * n; i++) {
            cin >> arr[i];
            if (arr[i] == 1) {
                count1++;
            }
            if (arr[i] == 0) {
                count0++;
            }
        }
        if(count0== 2*n || count1==2*n){
          cout<<0<<" "<<0<<endl;
        }
        else{
            if(count1>=count0){
                      cout << (count1%2) << " " << count0 << endl;
               }
               else{
                      cout << (count0%2) << " " << count1 << endl;
               }
        }
    }

    return 0;
}
