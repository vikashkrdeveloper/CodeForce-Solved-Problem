#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int sereja = 0, dima = 0;
    int i = 0, j = n - 1;
    bool flag = true;
    while (i <= j)
    {
        if (flag)
        {
            if (v[i] > v[j])
            {
                sereja += v[i];
                i++;
            }
            else
            {
                sereja += v[j];
                j--;
            }
            flag = false;
        }
        else
        {
            if (v[i] > v[j])
            {
                dima += v[i];
                i++;
            }
            else
            {
                dima += v[j];
                j--;
            }
            flag = true;
        }
    }
    cout << sereja << " " << dima << endl;
return 0;
}
