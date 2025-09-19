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
        vector<int> b(7);
        for (int i = 0; i < 7; i++)
        {
            cin >> b[i];
        }
        cout << b[0] << " " << b[1] << " " << b[2] << "\n";
    }
    return 0;
}