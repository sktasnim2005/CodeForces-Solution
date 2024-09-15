#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int count0=0,count1=0;
        for(int i=0;i<s.length();i++){
          if(s[i]=='0'){count0++;}
          if(s[i]=='1'){count1++;}
        }
        int min_count=min(count0,count1);
        if( min_count%2==0) {
            cout<<"NET"<<endl;
         }
         else{
          cout<<"DA"<<endl;
         }

      }

    return 0;
}


