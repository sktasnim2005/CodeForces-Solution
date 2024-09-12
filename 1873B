#include <iostream>
#include <cstring>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++){
          cin>>ar[i];
        }
        sort(ar,ar+n);
        int  x=ar[0]+1;
        int y=1;
        for(int i=1;i<n;i++){
          y*=ar[i];
        }
        cout<<x*y<<endl;
    }
    return 0;
}
 
