#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a, b, c;
        cin >> a >> b >> c;

        if (a == b)
        {
            cout << 0 << "\n";
            continue;
        }

        double target = (a + b) / 2.0;
        double bigger = max(a, b);
        double smaller = min(a, b);
        int moves = 0;

        while (fabs(bigger - target) > 1e-9)
        { // until balanced
            double pour = min(c, bigger - target);
            bigger -= pour;
            smaller += pour;
            moves++;
        }

        cout << moves << "\n";
    }
    return 0;
}
