#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    int distressed = 0;
    for (int i = 0; i < n; i++)
    {
        char c;
        int d;
        cin >> c >> d;
        if (c == '+')
        {
            x += d;
        }
        else
        {
            if (x >= d)
            {
                x -= d;
            }
            else
            {
                distressed++;
            }
        }
    }
    cout << x << ' ' << distressed << '\n';

    return 0;
}