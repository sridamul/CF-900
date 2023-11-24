#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << "7";
        n -= 3;
    }
    while (n > 0)
    {
        cout << "1";
        n -= 2;
    }
    cout << "\n";
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