#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int n = s.length();
        if (n % 2 != 0)
        {
            cout << "NO" << endl; 
            continue;
        }
        bool isSquare = false;
        for (int j = 0; j < n / 2; j++)
        {
            if (s[j] == s[n / 2 + j])
            {
                isSquare = true;
            }
            else
            {
                isSquare = false;
                break;
            }
        }
        if (isSquare)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
