#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Fast I/O in C++
    int n, h, a, width = 0;
    cin >> n >> h;
    // Taking input and checking the width of the road for each person to pass through the road by comparing the height of the person with the height of the fence.
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > h)
        {
            width += 2;
        }
        else
        {
            width += 1;
        }
    }
    cout << width << endl;
    return 0;
}
