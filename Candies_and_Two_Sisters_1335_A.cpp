#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ways = (n - 1) - (n / 2);
        cout << ways << endl;
    }
    return 0;
}
