#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int sum = 0, oneCnt = 0;
    vector<int> v(n);
    for (int &i : v)
        cin >> i;
    for (int i : v)
    {
        sum += i;
        if (i == 1)
            oneCnt++;
    }
    if (sum >= oneCnt + n && n > 1)
        cout << "YES\n";
    else
        cout << "NO\n";
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