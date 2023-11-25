// https://codeforces.com/problemset/problem/1855/B

#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i < 100; ++i)
    {
        if (n % i == 0)
            cnt++;
        else
            break;
    }
    cout << cnt << "\n";
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