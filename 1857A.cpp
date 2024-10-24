#include <iostream>
#include <cstring>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
          int ar[n],count=0,x=0,y=0;
          for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]%2==0){
              x+=ar[i];
            }
            else{
              y+=ar[i];
            }
          }



          if(x%2==0 && y%2==0){
            cout<<"YES"<<endl;
          }
          else{
            cout<<"NO"<<endl;
          }

    }
    return 0;
}


//Another way 


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum%2==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

 
