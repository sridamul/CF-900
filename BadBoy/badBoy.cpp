#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

// The intuition here is, to find the coordinates for the maximum distance, choose any two corners of that grid.

void solve()
{
    int n, m, i, j;
    std::cin >> n >> m >> i >> j;
    if (n == 1 && m == 1)
        puts("1 1 1 1");
    else
    {
        if ((i == 1 && j == 1) || (i == n && j == m))
        {
            printf("%d 1 1 %d\n", n, m);
        }
        else if ((i == n && j == 1) || (i == 1 && j == m))
        {
            printf("%d %d 1 1\n", n, m);
        }
        else
        {
            printf("%d 1 1 %d\n", n, m);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}