#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 1, cur = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            cur = 1;
        else
            cur++;
        ans = max(ans, cur);
    }
    cout << ans + 1 << endl;
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