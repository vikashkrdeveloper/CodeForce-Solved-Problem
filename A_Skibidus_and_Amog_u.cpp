#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string w;
        cin >> w;
        w = w.substr(0, w.size() - 2);
        if (w.empty())
        {
            cout << "i" << endl;
        }
        else
        {
            cout << w + "i" << endl;
        }
    }
    return 0;
}
