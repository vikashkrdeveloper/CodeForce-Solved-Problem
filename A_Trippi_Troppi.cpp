#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string a, b, c;
        cin >> a >> b >> c;
        string modern_name;
        modern_name.push_back(a[0]);
        modern_name.push_back(b[0]);
        modern_name.push_back(c[0]);
        cout << modern_name << "\n";
    }
    return 0;
}
