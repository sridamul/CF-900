#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

// Note: Time exceeded... Watch the other solution.

int main()
{
    ll t, l, r, a;
    cin >> t;
    while (t--)
    {
        ll temp, maxv = 0, index = 0;
        cin >> l >> r >> a;
        for (ll i = l; i <= r; i++)
        {
            temp = (i / a) + (i % a);
            if (temp > maxv)
            {
                maxv = temp;
            }
        }
        cout << maxv << "\n";
    }
    return 0;
}