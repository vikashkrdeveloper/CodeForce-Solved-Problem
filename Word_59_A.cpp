#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int upper_count = 0;
    int lower_count = 0;

    // Count uppercase and lowercase letters
    for (char c : s)
    {
        if (isupper(c))
        {
            upper_count++;
        }
        else
        {
            lower_count++;
        }
    }

    // Convert to uppercase or lowercase based on the counts
    if (upper_count > lower_count)
    {
        for (char &c : s)
        {
            c = toupper(c);
        }
    }
    else
    {
        for (char &c : s)
        {
            c = tolower(c);
        }
    }

    // Print the result
    cout << s << endl;

    return 0;
}
