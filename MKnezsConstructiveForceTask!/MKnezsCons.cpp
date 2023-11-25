#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "YES\n";
        for (int i = 0; i < n / 2; ++i)
        {
            cout << "-1 1 ";
        }
        cout << "\n";
    }
    else
    {
        if (n >= 5)
        {
            cout << "YES\n";
            int k = (n - 1) / 2;
            for (int i = 0; i < n / 2; ++i)
            {
                cout << k - 1 << " " << -(k) << " ";
            }
            cout << k - 1 << "\n";
        }
        else
            cout << "NO\n";
    }
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