#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> scores(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> scores[i];
    }

    int cutoffScore = scores[k - 1];
    int advancingCount = 0;
    for (int score : scores)
    {
        if (score >= cutoffScore && score > 0)
        {
            advancingCount++;
        }
    }

    cout << advancingCount << endl;
    return 0;
}
