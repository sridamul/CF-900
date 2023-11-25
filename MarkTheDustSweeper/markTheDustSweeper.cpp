#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int ans = 0;
    int ptr = 0;
    while (ptr < n && v[ptr] == 0)
    {
        ptr++;
    }
    for (int i = ptr; i < n - 1; ++i)
    {
        ans += v[i];
        if (v[i] == 0)
            ans++;
    }
    cout << ans << '\n';
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