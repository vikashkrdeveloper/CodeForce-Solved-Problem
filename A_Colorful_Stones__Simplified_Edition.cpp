#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int pos = 1;
    for (char c : t)
    {
        if (s[pos - 1] == c)
        {
            pos++;
            // ==> 
        }
    }
    cout <<" ==> "<< pos << endl;
    return 0;
}
