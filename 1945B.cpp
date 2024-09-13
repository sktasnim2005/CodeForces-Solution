#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
    long long  a,b,m;
    cin>>a>>b>>m;
    long long x=(m/a+1)+(m/b+1);
    cout<<x<<endl;
  }
}
