#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y, K;
        cin >> X >> Y >> K;
        int Ax = 0, Ay = 0;
        int Bx = K, By = 0;
        if (Bx > X)
        {
            Ax = X - K;
            Bx = X;
        }
        int Cx = 0, Cy = 0;
        int Dx = 0, Dy = K;
        if (Dy > Y)
        {
            Cy = Y - K;
            Dy = Y;
        }
        cout << Ax << " " << Ay << " " << Bx << " " << By << endl;
        cout << Cx << " " << Cy << " " << Dx << " " << Dy << endl;
    }
    return 0;
}
