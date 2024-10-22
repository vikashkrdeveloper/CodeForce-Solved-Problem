#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string b;
        cin >> b;

        string a;
        a.push_back(b[0]);
        for (size_t i = 1; i < b.length(); i += 2)
        {
            a.push_back(b[i]);
        }
        a.push_back(b[b.length() - 1]);
        cout << a << endl;
    }
    return 0;
}
