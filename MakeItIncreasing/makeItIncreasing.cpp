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
    for (int i = n - 2; i >= 0; --i)
    {
        while (v[i] >= v[i + 1] && v[i] > 0)
        {
            v[i] /= 2;
            ans++;
        }
        if (v[i] == v[i + 1])
        {
            cout << "-1"
                 << "\n";
            return;
        }
    }
    cout << ans << "\n";
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