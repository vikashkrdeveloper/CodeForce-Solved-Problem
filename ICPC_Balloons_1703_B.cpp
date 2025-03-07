#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int NumberOfProblems;
        cin >> NumberOfProblems;
        string solvedProblems;
        cin >> solvedProblems;
        int count = 0;
        unordered_set<char> solved;
        for (int i = 0; i < NumberOfProblems; i++)
        {
            if (solved.find(solvedProblems[i]) == solved.end())
            {
                count += 2;
                solved.insert(solvedProblems[i]);
            }
            else
            {
                count += 1;
            }
        }
        cout << count << endl;
    }

    return 0;
}
