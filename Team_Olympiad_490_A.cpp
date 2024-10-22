#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> programmers;
    vector<int> mathematicians;
    vector<int> sportsmen;
    for (int i = 0; i < n; ++i)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            programmers.push_back(i + 1);
        }
        else if (t == 2)
        {
            mathematicians.push_back(i + 1);
        }
        else if (t == 3)
        {
            sportsmen.push_back(i + 1);
        }
    }
    int teamCount = min({programmers.size(), mathematicians.size(), sportsmen.size()});
    cout << teamCount << endl;
    for (int i = 0; i < teamCount; ++i)
    {
        cout << programmers[i] << " " << mathematicians[i] << " " << sportsmen[i] << endl;
    }

    return 0;
}
