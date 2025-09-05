#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> result;
        for (int i = 0; i < n; ++i)
        {
            string row;
            cin >> row;
            for (int j = 0; j < 4; ++j)
            {
                if (row[j] == '#')
                {
                    result.push_back(j + 1); // It's store the column index (1-based)
                    break;
                }
            }
        }
        // Output the results in reverse order
        for (int i = n - 1; i >= 0; --i)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
