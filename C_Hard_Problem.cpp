#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int row1 = min(m, a);
        int row2 = min(m, b);
        int remain1 = m - row1;
        int remain2 = m - row2;
        int remainSeats = remain1 + remain2;
        int monkeyWithoutPreference = min(remainSeats, c);
        cout << row1 + row2 + monkeyWithoutPreference << "\n";
    }

    return 0;
}
