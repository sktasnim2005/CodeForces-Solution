#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
              int ara[3];

              for(int i=0;i<3;i++)
              {
                cin>>ara[i];
              }

              sort(ara,ara+3);
              if(ara[0]+ara[1]==ara[2]){
                cout<<"YES"<<endl;
              }
              else{
                cout<<"NO"<<endl;
              }
    }
    return 0;
}







 
