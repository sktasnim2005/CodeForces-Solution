#include <iostream>
#include <cstring>
#include<algorithm>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
    int n;
    cin >> n;
    int ar[n],countM=0,countC=0;
    for(int i=0;i<n;i++){
      cin>>ar[i];
      if(ar[i]==0){
        countC++;
        countM=max(countC,countM);
      }
      else{
        countC=0;
      }
    }

     cout<<countM<<endl;
   }
    return 0;
}








 
