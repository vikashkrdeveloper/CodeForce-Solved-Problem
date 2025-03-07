#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Fast I/O in C++
    int n, a;
    cin >> n;
    // Taking input and checking if the input is 1 or 0.
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
    return 0;
}
