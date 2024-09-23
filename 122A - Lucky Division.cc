#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count=0;
    for(char c: s){
      if(c=='4' || c=='7'){
        count++;
      }
    }
    int num=stoi(s);// i am using ths to convert string to integer 
    if(count==s.length() || num%4==0 || num%7==0|| num%47==0|| num%744==0){
          cout<<"YES";
      }
      else{
        cout<<"NO";
      }

    return 0;
}
