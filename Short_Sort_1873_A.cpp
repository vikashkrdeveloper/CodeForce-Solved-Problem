#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    set<string> valid_cases = {"abc", "acb", "bac", "cab", "cba"};
    while (t--)
    {
        string s;
        cin >> s;
        if (valid_cases.count(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
