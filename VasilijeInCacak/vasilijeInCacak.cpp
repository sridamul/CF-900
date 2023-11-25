// https://codeforces.com/problemset/problem/1878/C

// The main intuition here is, the minimum possible value of sum of those integers and the maximum possible value for those integers
// is the min and max range of the possible x value.
// So, According to the mathematical induction, one can prove that is a value is in the range between the max and min value then, there
// exist a solution.

#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    int maxVal = (n * (n + 1) / 2) - ((n - k) * (n - k + 1) / 2); // MaxValue Possible
    int minVal = k * (k + 1) / 2;                                 // MinValue Possible
    if (minVal <= x && maxVal >= x)
    {
        cout << "YES\n";
        return;
    }
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