#include <iostream>
using namespace std;

int main() {
    char c;
    cin>>c;
    string s;
    cin>>s;
    string p="qwertyuiopasdfghjkl;zxcvbnm,./";
    if(c=='R'){
        for(int i=0;i<s.length();i++){
            for(int j=0;j<p.length();j++){
             if(s[i]==p[j]){
              cout<<p[j-1];
              break;
             }
        }
    }
    }
    else if(c=='L'){
        for(int i=0;i<s.length();i++){
            for(int j=0;j<p.length();j++){
             if(s[i]==p[j]){
              cout<<p[j+1];
              break;
             }
        }
    }
    }
    return 0;
}


