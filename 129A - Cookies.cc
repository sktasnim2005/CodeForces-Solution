#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int countE=0,countO=0;
    for(int i=0;i<n;i++){
          if(a[i]%2==0){
            countE++;
          }
          else{
              countO++;
              }
    }
    if(countO%2!=0){
      cout<<countO<<endl;
    }
    else{
       cout<<countE<<endl;
    }




    return 0;
}

