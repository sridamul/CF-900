// https://codeforces.com/contest/1795/problem/B

#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int L = 0, R = 55;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        if (l <= k && k <= r)
        {
            L = max(L, l), R = min(R, r);
        }
    }
    cout << (L == R ? "YES\n" : "NO\n");
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