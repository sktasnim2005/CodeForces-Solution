#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
    while(t--){
      int n;
      cin>>n;
      int a=0, b=0;
      string s;
      cin>>s;
      for (int i=0; i<s.size(); i++) {
          if (s[i]=='(' ) a++;
          else a--;
          if (a<0) {
             b++; a=0;
          }
    }
    cout << b << endl;
}
return 0;
}
