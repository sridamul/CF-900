#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll s = n * (n + 1) / 2;
    ll pow2 = 1;
    while (pow2 <= n)
    {
        s -= pow2 * 2;
        pow2 *= 2;
    }
    cout << s << "\n";
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