#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int oc=count(s.begin(),s.end(),'1');
    int x=4*sqrt(n)-4;
    if(x==oc){
      cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
  }
}
