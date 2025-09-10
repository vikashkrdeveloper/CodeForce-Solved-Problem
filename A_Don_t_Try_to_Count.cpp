#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; // number of test cases

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        string cur = x; // start with initial string
        int ops = 0;    // count operations
        bool found = false;

        // Cap the maximum length we need to build
        int maxLen = m * 2 + n;

        // Try until cur is long enough
        while ((int)cur.size() <= maxLen)
        {
            // Check if s is a substring of cur
            if (cur.find(s) != string::npos)
            {
                cout << ops << "\n";
                found = true;
                break;
            }

            // Perform operation: double the string
            cur += cur;
            ops++;
        }

        if (!found)
            cout << -1 << "\n";
    }

    return 0;
}
