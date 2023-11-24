#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    if (v.front() == v.back())
    {
        cout << n * (n - 1) << "\n";
        return;
    }
    int mn = 0, mx = n - 1;

    while (v[0] == v[mn])
        ++mn;

    while (v[n - 1] == v[mx])
        --mx;
    int l = mn;
    int r = n - mx - 1;
    cout << 2 * l * r << "\n";
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