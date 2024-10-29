#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cin>>s;
    string ans="";

  for (int i = 0; i < s.length(); ++i) {
            if(s[i]=='.'){
              ans+='0';
            }
            else if(s[i]=='-' && s[i+1]=='.'){
              ans+='1';
              i++;
            }
            else if(s[i]=='-' && s[i+1]=='-'){
              ans+='2';
              i++;
            }
        }
        cout<<ans;
    return 0;
}

