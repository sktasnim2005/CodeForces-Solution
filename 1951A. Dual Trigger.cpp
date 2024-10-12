#include <iostream>
#include <vector>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
    int n; 
    cin >> n;
    string str; 
    cin >> str;
    vector<int> vec;
    for(int i=0;i<n;i++){
        if(str[i]=='1') vec.push_back(i);
    }
    if(vec.size()%2 != 0){
        cout << "NO"<<endl;
    }
    else if(vec.size()==2 && vec[1]-vec[0]==1){
        cout << "NO"<<endl;
    }
    else{
        cout << "YES"<<endl;
    }
   }
   return 0;
}
