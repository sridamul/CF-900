#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int x, y;
    cin >> x >> y;
    if (abs(x - y) == 1)
        cout << "NO\n";
    else
        cout << "YES\n";
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