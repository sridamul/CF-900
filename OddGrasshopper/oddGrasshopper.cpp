#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int x, n, z = 0;
    cin >> x >> n;
    int y = n % 4;
    if (y == 1)
        z -= n;
    else if (y == 2)
        z = 1;
    else if (y == 3)
        z = n + 1;

    if (x & 1)
        cout << x - z << "\n";
    else
        cout << x + z << "\n";
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