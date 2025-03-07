#include <bits/stdc++.h>
using namespace std;
void watermelon(int w)
{
    if (w % 2 == 0 && w >= 4)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
        return;
    }
}
int main()
{
    int w;
    cin >> w;
    watermelon(w);
    return 0;
}
