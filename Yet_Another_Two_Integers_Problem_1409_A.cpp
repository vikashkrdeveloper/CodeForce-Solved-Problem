#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, y, z;
        cin >> a >> b;
        z = abs(a - b);
        x = z / 10;
        y = z % 10;
        if (y == 0)
        {
            cout << x << endl;
        }
        else
        {
            cout << x + 1 << endl;
        }
    }

    return 0;
}
