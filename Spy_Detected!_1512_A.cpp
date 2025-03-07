#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int len;
        cin >> len;
        vector<int> v(len);
        for (int i = 0; i < len; i++)
            cin >> v[i];
        int ans = 0;
        for (int i = 0; i < len; i++)
        {
            if (i == 0)
            {
                if (v[i] != v[i + 1] && v[i] != v[i + 2])
                {
                    ans = i + 1;
                    break;
                }
            }
            else if (i == len - 1)
            {
                if (v[i] != v[i - 1] && v[i] != v[i - 2])
                {
                    ans = i + 1;
                    break;
                }
            }
            else
            {
                if (v[i] != v[i - 1] && v[i] != v[i + 1])
                {
                    ans = i + 1;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
return 0;
}
