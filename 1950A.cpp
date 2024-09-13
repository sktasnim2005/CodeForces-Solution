#include<iostream>
#include<vector> // Include this to use std::vector
using namespace std;

int main()
{
    int T, a, b, c;
    cin >> T;
    vector<string> results; // Vector to store the results

    for (int i = 0; i < T; i++)
    {
        cin >> a >> b >> c;
        string result; // Variable to store the result for each test case
        for (int j = 0; j < T; j++)
        {
            if (a < b && a < c && b < c)
            {
                result = "STAIR";
            }
            else if (a < b && b > c )
            {
                result = "PEAK";
            }
            else
            {
                result = "NONE";
            }
        }
        results.push_back(result); // Store the result for this test case
    }

    // Print all the results at the end
    for (const auto& res : results)
    {
        cout << res << endl;
    }

    return 0;
}
