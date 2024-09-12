#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
         int ar[n],count1=0,count2=0;
         for(int i=0;i<n;i++){
                  cin>>ar[i];
                  if(ar[i]==1){
                      count1++;
                   }
                   else{
                       count2++;
                   }
         }
         if(count1 % 2 ==0 && ( count2 % 2 ==0 || count1>0)){
             cout<<"YES"<<endl;
         }
         else{
          cout<<"NO"<<endl;
         }


    }
    return 0;
}

 
