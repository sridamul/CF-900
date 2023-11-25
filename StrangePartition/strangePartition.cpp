#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

// https://codeforces.com/problemset/problem/1471/A
// The max sum can be obtained with the initial array
// while the min sum can be attained after converting the whole array to a single element.

int main()
{
    fastread();
    // freopen("input.txt","r", stdin);
    ll t, n, x, c;
    cin >> t;
    while (t--)
    {
        ll minAns = 0, maxAns = 0, sum = 0;
        cin >> n >> x;
        for (ll i = 0; i < n; i++)
        {
            cin >> c;
            sum += c;
            maxAns += c / x;
            if (c % x != 0)
                maxAns++;
        }
        minAns = (sum / x);
        if (sum % x != 0)
            minAns++;

        cout << minAns << " " << maxAns << endl;
    }
    return 0;
}
