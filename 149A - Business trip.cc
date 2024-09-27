#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[12];
    int sum=0,count=0;
    for (int i = 0; i < 12; i++ ) {
         cin>>a[i];
        }
    if(n==0){
      cout<<0;
      return 0;
    }
   sort(a,a+12,greater<int>());
    for (int i = 0; i < 12; i++ ) {
         sum+=a[i];
         count++;
         if(sum>=n){
          cout<<count;
          return 0;
         }
        }
        cout<<-1;

    return 0;
}
