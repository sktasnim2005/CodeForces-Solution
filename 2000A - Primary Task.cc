#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    if( 102<=n && n<=109){
      cout<<"YES"<<endl;
    }
    else if( 1010<=n && n<=1099){
      cout<<"YES"<<endl;
    }
   else if( 10100<=n && n<=10999){
      cout<<"YES"<<endl;
    }

    else
    {
      cout<<"NO"<<endl;
    }
  }
}

