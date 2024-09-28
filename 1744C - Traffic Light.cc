#include <iostream>
#include <string>
using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        char x;
        cin >> n >> x;
        string s;
        cin >> s;
        s += s;
        int  position=0,max_D = 0;

        for(int i = s.length()-1; i>=0; i--){
            if(s[i] == 'g'){
                  position=i;
            }
            if(s[i] == x){
                max_D = max(max_D, position - i);
            }

            }
                    cout << max_D << endl;

        }

    return 0;
}
