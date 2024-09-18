#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n),temp;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        int count=0;
        temp = b;
        reverse(temp.begin(),temp.end());

         if(a==b || a==temp){
          cout<<"Bob"<<endl;
         }
         else{
          cout<<"Alice"<<endl;
         }
    }
    return 0;
}
