#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x,y,z;
        cin>>x;
        cin>>y;
        cin>>z;
        int countA=0,countB=0,countC=0;
        for(int i=0;i<3;i++){
          if(x[i]=='A'){countA++;}
          if(x[i]=='B'){countB++;}
          if(x[i]=='C'){countC++;}
        }
        for(int i=0;i<3;i++){
          if(y[i]=='A'){countA++;}
          if(y[i]=='B'){countB++;}
          if(y[i]=='C'){countC++;}
        }
        for(int i=0;i<3;i++){
          if(z[i]=='A'){countA++;}
          if(z[i]=='B'){countB++;}
          if(z[i]=='C'){countC++;}
        }
        if(countA<3){cout<<"A"<<endl;}
        else if(countB<3){cout<<"B"<<endl;}
       else{cout<<"C"<<endl;}
    }
    return 0;
}

