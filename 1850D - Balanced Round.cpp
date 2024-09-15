#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
      int n,k;
      cin >> n >> k;
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      sort(a,a+n);
      int count=1,counta=1;
      for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i] <= k){
            count++;

        }
      else {
                counta = max(counta, count);
                count = 1;
            }
        }
        counta = max(counta, count);
        cout << n - counta << endl;
      }

    return 0;
}

