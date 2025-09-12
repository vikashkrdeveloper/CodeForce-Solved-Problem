#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (s.size() > 2 && s.substr(0, 2) == "10")
        {
            string exp = s.substr(2);

            if (exp[0] != '0' && stoi(exp) >= 2)
            {
                cout << "YES\n";
                continue;
            }
        }
        cout << "NO\n";
    }
    return 0;
}
