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
                int ar[n],count=0;
                for(int i=0;i<n;i++){
                  cin>>ar[i];
                }
            if(n==1){
                cout<<"YES"<<endl;
              }
              else{

                sort(ar,ar+n);

                for(int i=0;i<n-1;i++){
                     if(ar[i+1] == ar[i]){
                        count++;
                     }
                }
                if(count>0){
                  cout<<"NO"<<endl;
                }
                else{
                  cout<<"YES"<<endl;
                }
        }
    }
    return 0;
}


 
