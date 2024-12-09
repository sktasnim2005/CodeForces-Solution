#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
       int n;
       cin>>n;
       vector<int>a(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       int ans=n,last=-1;
      for(int i=1;i<n;i++){
        if(a[i]!=a[0]){
          ans=min(ans,i-last-1);
          last=i;
        }
      }
      ans=min(ans,n-last-1);

        cout<< ((n==ans)?-1:ans)<<endl;

   }
  return 0;
}
