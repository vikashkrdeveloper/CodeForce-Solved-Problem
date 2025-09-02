#include <bits/stdc++.h>
using namespace std;

char flip(char c)
{
    if (c == 'p')
        return 'q';
    if (c == 'q')
        return 'p';
    return 'w';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        string b = "";
        for (int i = a.size() - 1; i >= 0; i--)
        {
            b.push_back(flip(a[i]));
        }
        cout << b << "\n";
    }
    return 0;
}
