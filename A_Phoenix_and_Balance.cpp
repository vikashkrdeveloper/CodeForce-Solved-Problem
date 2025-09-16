#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int pile1 = 1 << n; // largest coin
        for (int i = 1; i < n / 2; i++)
            pile1 += (1 << i); // smallest (n/2 - 1) coins

        int pile2 = 0;
        for (int i = n / 2; i < n; i++)
            pile2 += (1 << i);

        cout << abs(pile1 - pile2) << "\n";
    }
    return 0;
}
