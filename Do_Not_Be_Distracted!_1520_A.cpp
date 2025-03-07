#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nNumber;
    cin >> nNumber;
    for (int i = 1; i <= nNumber; i++)
    {
        int numberOfDays;
        cin >> numberOfDays;
        string solvedTasks;
        cin >> solvedTasks;
        bool isSolved[26] = {false};
        bool isPossible = true;
        for (int j = 0; j < numberOfDays; j++)
        {
            if (isSolved[solvedTasks[j] - 'A'])
            {
                isPossible = false;
                break;
            }
            isSolved[solvedTasks[j] - 'A'] = true;
            while (j + 1 < numberOfDays && solvedTasks[j] == solvedTasks[j + 1])
            {
                j++;
            }
        }
        cout << (isPossible ? "YES" : "NO") << endl;
    }

    return 0;
}
