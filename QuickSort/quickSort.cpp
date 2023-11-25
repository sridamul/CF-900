// https://codeforces.com/problemset/problem/1768/B

#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int c = 1;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == c)
            c++;
    }

    cout << (n - c + k) / k << "\n";
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