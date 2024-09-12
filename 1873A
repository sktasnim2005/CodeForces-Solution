#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int count =0;
      if(s=="abc"){
        count++;
      }
      else{
              swap(s[0],s[1]);
              if(s=="abc"){
                count++;
              }
              swap(s[0],s[1]);

              swap(s[1],s[2]);
              if(s=="abc"){
                count++;
              }
              swap(s[1],s[2]);

              swap(s[0],s[2]);
              if(s=="abc"){
                count++;
              }
      }
       if(count>0){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
    }

    return 0;
}





 
