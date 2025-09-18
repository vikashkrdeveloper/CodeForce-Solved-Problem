#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> solved;
        int time_spent = 0;
        for (char c : s)
        {
            int problem_time = c - 'A' + 1;
            time_spent++;
            if (time_spent >= problem_time)
            {
                solved.insert(c);
            }
        }
        cout << solved.size() << endl;
    }
    return 0;
}
