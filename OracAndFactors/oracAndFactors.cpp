#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

// Time Exceeded... Failure

int solve(int n)
{
    int div;
    for (int i = 2; i <= n; ++i)
    {
        if (n % i == 0)
        {
            div = i;
            break;
        }
    }
    // cout << "Div: " << div << endl;
    return div;
}

int main()
{
    int t;
    ll n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; ++i)
        {
            n = n + solve(n);
        }
        cout << n << "\n";
    }
    return 0;
}