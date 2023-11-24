#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b >= a)
    {
        cout << b << "\n";
        return;
    }
    if (c <= d)
    {
        cout << "-1\n";
        return;
    }
    a -= b;
    int dif = c - d;
    cout << (b + (a + dif - 1) / dif * c) << "\n";
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