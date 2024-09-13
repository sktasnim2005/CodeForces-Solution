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
    string s;
    cin>>s;
    string p;
    cin>>p;
    int count=0;
    for(int i=0;i<n;i++){
      if((s[i]=='R' &&( p[i]=='B' || p[i]=='G')) || (( s[i]=='B' || s[i]=='G') && p[i]=='R')){
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
    return 0;
}







 
