#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> scores(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> scores[i];
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    int amazingCount = 0;
    int bestScore = scores[0];
    int worstScore = scores[0];
    for (int i = 1; i < n; ++i)
    {
        if (scores[i] > bestScore)
        {
            amazingCount++;
            bestScore = scores[i];
        }
        else if (scores[i] < worstScore)
        {
            amazingCount++;
            worstScore = scores[i];
        }
    }
    cout << amazingCount << endl;
    return 0;
}
