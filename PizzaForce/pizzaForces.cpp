#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        // 6 slices = 15 mins
        // 8 slices = 20 mins
        // 10 slices = 25 mins
        cout << max(6LL, n + 1) / 2 * 5 << '\n';
    }
    return 0;
}