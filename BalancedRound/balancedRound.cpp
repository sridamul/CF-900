#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k, count = 1, cons = 1;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
    {
        if (abs(v[i] - v[i - 1]) <= k)
        {
            cons++;
        }
        else
        {
            cons = 1;
        }
        count = max(count, cons);
    }
    cout << n - count << "\n";
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