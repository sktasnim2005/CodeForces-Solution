#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1;
        cin>>s;
        int n=s.size();
        int r=0,p=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='b') r++;
            else if(s[i]=='B') p++;
            else{
                if(s[i]>92&&r) r--;
                else if(s[i]<=92&&p) p--;
                else s1+=s[i];
            }

        }
        reverse(s1.begin(),s1.end());
        cout<<s1<<endl; }
}
