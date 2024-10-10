#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    string result;
    for (size_t i = 0; i < a.length(); ++i)
    {
        if (a[i] != b[i])
        {
            result += '1';
        }
        else
        {
            result += '0';
        }
    }
    cout << result << endl;

    return 0;
}
