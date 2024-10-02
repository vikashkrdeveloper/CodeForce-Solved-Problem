#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Fast I/O in C++
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    // Loop to simulate the movement of the students in the queue.
    for (int i = 0; i < t; i++)
    {
        // Loop to check the adjacent students in the queue and swap them if the student in front of the other
        // student is taller than the student behind him.
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                swap(s[j], s[j + 1]);
                j++;
            }
        }
    }
    cout << s << endl;

    return 0;
}
