#include <bits/stdc++.h>
using namespace std;

// In this solution, we don't recursively do the same function again and again. Instead after completing once.
// We decrement the value of k and then add 2*k to n to get the final result.

void solve()
{

    long long int n, i, j, k;
    cin >> n;

    cin >> k;
    long long int keep = n, v;
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            v = i;
            break;
        }
    }
    k--;
    n += v;
    n += (2 * k);
    cout << n << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int testcase;
    cin >> testcase;
    for (int t = 1; t <= testcase; t++)
    {
        solve();
    }

    return 0;
}