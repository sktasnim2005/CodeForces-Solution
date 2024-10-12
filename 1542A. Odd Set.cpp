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
    int x,countE=0,countO=0;
    for(int i=0;i<2*n;i++){
      cin>>x;
      if(x%2==0){
        countE++;
      }
      else{
        countO++;
      }
    }
     if(countE==countO){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
   }
    return 0;
}






 
