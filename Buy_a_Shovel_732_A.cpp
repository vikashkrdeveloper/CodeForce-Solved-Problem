#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    int i = 1;
    while (true)
    {
        if ((k * i) % 10 == 0 || (k * i) % 10 == r)
        {
            cout << i << endl;
            break;
        }
        i++;
    }

    return 0;
}
