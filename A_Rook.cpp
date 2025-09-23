#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        string s;
        cin >> s;
        char col = s[0];
        char row = s[1];

        for (char r = '1'; r <= '8'; ++r)
        {
            if (r == row)
                continue;
            cout << col << r << '\n';
        }
        for (char c = 'a'; c <= 'h'; ++c)
        {
            if (c == col)
                continue;
            cout << c << row << '\n';
        }
    }
    return 0;
}
