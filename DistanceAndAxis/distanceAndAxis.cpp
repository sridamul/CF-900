#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n < k)
    {
        cout << k - n << endl;
    }
    else if (n == k)
    {
        cout << "0" << endl;
    }
    else
    {
        if ((n + k) % 2 == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << "1" << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}