#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 1)
    {
        cout << -1 << endl; // If n is odd then it's impossible to form the perfect permutation
    }
    else
    {
        for (int i = 1; i <= n; i += 2)
        {
            cout << i + 1 << " " << i << " ";
        }
        cout << endl;
    }

    return 0;
}