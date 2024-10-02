#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 1;
    int prev_magnet;
    cin >> prev_magnet;
    for (int i = 1; i < n; i++)
    {
        int magnet;
        cin >> magnet;
        if (magnet != prev_magnet)
        {
            count++;
            prev_magnet = magnet;
        }
    }
    cout << count << endl;
    return 0;
}
