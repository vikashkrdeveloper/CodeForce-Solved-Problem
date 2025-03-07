#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s[1] == '+')
        {
            total++;
        }
        else
        {
            total--;
        }
    }
    cout << total << endl;
    return 0;
}
