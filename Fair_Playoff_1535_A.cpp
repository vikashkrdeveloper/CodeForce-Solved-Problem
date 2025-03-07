#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> skills(4);
        for (int i = 0; i < 4; ++i)
        {
            cin >> skills[i];
        }

        vector<int> sorted_skills = skills;
        sort(sorted_skills.begin(), sorted_skills.end());

        int largest = sorted_skills[3];
        int second_largest = sorted_skills[2];

        if ((largest == skills[0] || largest == skills[1]) &&
            (second_largest == skills[2] || second_largest == skills[3]))
        {
            cout << "YES" << endl;
        }
        else if ((largest == skills[2] || largest == skills[3]) &&
                 (second_largest == skills[0] || second_largest == skills[1]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
