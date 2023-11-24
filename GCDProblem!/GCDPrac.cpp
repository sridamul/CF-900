#include <bits/stdc++.h>
using namespace std;
mt19937 rng((int)std::chrono::steady_clock::now().time_since_epoch().count());
void solve(int tc)
{
    int n;
    cin >> n;
    while (1)
    {
        int k = uniform_int_distribution<int>(2, n - 2)(rng);
        int l = n - k - 1;
        if (k != l && k != 1 && l != 1 && gcd(k, l) == 1)
        {
            cout << k << ' ' << l << ' ' << 1 << endl;
            break;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
}