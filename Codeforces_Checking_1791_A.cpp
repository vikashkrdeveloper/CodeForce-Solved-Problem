#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    unordered_set<char> codeforces_chars = {'c', 'o', 'd', 'e', 'f', 'r', 's'};
    while (t--)
    {
        char c;
        cin >> c;
        if (codeforces_chars.find(c) != codeforces_chars.end())
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
