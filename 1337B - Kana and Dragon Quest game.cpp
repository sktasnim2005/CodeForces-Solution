#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int a,b,c;
        cin>>a>>b>>c;

    while(b-- && a>20){
             a=(a/2)+10;
        }

        a-=c*10;

        if(a<=0){
            cout<<"YES"<<endl;}
        else{
          cout<<"NO"<<endl;}


      }

    return 0;
}


