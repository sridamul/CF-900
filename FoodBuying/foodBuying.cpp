#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t, n, p, d, ans;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ans = 0;
        while (1)
        {
            d = (n / 10) * 10; // makes the last digit to 0
            ans += d;          // adds the d to sum
            p = n - d;         // stores the last digit in p
            n = (n / 10) + p;  // adds the last digit to n/10

            if (n < 10)
            {
                ans += n;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}