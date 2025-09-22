#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long time1 = abs(a - 1);
        long long time2 = (b == 1 ? 0 : abs(b - c) + abs(c - 1));
        if (time1 < time2)
        {
            cout << 1 << endl;
        }
        else if (time1 > time2)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
    return 0;
}