#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int hour, minute;
    char separator;

    cin >> hour >> separator >> minute;

    string period = "AM";
    if (hour >= 12) {
        period = "PM";
    }
    if (hour > 12) {
        hour -= 12;
    } else if (hour == 0) {
        hour = 12;
    }

    cout << setw(2) << setfill('0') << hour << separator << setw(2) << setfill('0') << minute << " " << period << endl;
  }
    return 0;
}
