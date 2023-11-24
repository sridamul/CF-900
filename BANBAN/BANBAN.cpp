#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    cout << n / 2 + n % 2 << "\n"; // ceil(n/2)
    int l = 1, r = 3 * n;
    while (l < r)
    {
        cout << l << " " << r << "\n";
        l += 3;
        r -= 3;
    }
    return;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}