#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;

        string new_a = b[0] + a.substr(1);
        string new_b = a[0] + b.substr(1);
        cout << new_a << " " << new_b << endl;
    }

    return 0;
}
