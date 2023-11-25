#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    long long a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        int m = -1;
        // For a*m
        if ((2 * b - c) % a == 0 && (2 * b - c) > 0)
        {
            m = (2 * b - c) / a;
        }
        // For b*m
        else if ((a + c) % (2 * b) == 0)
        {

            m = (a + c) / (2 * b);
        }
        // For c*m
        else if ((2 * b - a) % c == 0 && (2 * b - a) > 0)
        {

            m = (2 * b - a) / c;
        }

        if (m == -1)
        {

            cout << "NO\n";
        }
        else
        {

            cout << "YES\n";
        }
    }
    return 0;
}