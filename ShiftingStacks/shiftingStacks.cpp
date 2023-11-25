#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    long long sum = 0, need = 0;
    for (int i = 0; i < n; ++i)
    {
        need += i;
        sum += a[i];
        if (sum < need)
        {
            cout << "NO\n";
            return;
        }
    }
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