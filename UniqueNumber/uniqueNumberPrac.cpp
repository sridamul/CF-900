#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

// The intuition here is...
// We know that the small possible sum of single digit is just the same.
// And using the distinct possible numbers we can make only upto 45. that is 1+2+3+4+5+6+7+8+9 = 45
// Finally, we deduct the max possible number (9) from the given number (n) and decrease the max possible number by one.

int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        string s;
        int x = 9, sum = 0;
        cin >> n;
        if (n < 10)
        {
            cout << n << "\n";
        }
        else if (n > 45)
        {
            cout << "-1\n";
        }
        else
        {
            while (x > 0)
            {
                if (n - sum >= x)
                {
                    sum += x;
                    s += (x + '0'); // converting the int to string and then stores in it string s
                    // cout << s << endl;
                }
                x--;
            }
            sort(s.begin(), s.end());
            cout << s << '\n';
        }
    }
    return 0;
}