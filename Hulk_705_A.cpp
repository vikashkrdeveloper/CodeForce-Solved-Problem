#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string feeling;
    for (int i = 1; i <= n; ++i)
    {
        if (i % 2 != 0)
        {
            feeling += "I hate";
        }
        else
        {
            feeling += "I love";
        }
        if (i < n)
        {
            feeling += " that ";
        }
    }
    feeling += " it";
    cout << feeling << endl;
    return 0;
}
