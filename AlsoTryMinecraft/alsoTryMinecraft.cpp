#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;

// PRIME NUMBER TEST//
bool prime(int n)
{
    if (n < 2)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Graph Grid //
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int main()
{
    int n, m;
    cin >> n >> m;
    int ar[n + 3];
    for (int i = 1; i <= n; i++)
        cin >> ar[i];
    ll pre1[n + 4], pre2[n + 4];
    pre1[1] = 0, pre2[n] = 0;
    for (int i = 2; i <= n; i++)
    {
        if (ar[i] < ar[i - 1])
            pre1[i] = pre1[i - 1] + (ar[i - 1] - ar[i]);
        else
            pre1[i] = pre1[i - 1];
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (ar[i] < ar[i + 1])
            pre2[i] = pre2[i + 1] + (ar[i + 1] - ar[i]);
        else
            pre2[i] = pre2[i + 1];
    }

    while (m--)
    {
        int x, y;
        cin >> x >> y;
        if (x < y)
        {
            ll ans = pre1[y] - pre1[x];
            cout << ans << endl;
        }
        else
        {
            ll ans = pre2[y] - pre2[x];
            cout << ans << endl;
        }
    }
}