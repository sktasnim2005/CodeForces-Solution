#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
      int a, b, c, d;
      cin>>a>>b>>c>>d;
      int p = (c-a)*(c-b);
      int q = (d-a)*(d-b);
      if(p*q<=0){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    return 0;
}

// 
Check Overlap:

It computes two products:

p =(c−a)×(c−b)
q =(d−a)×(d−b)

The logic here is that these products determine whether the values c and d are between a and b.

