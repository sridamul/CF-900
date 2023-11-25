#include <iostream>
using namespace std;

long long n, a[200005], q, sum = 0, pref[200005], t;

// The intuition here is, we calculate the prefix sums, then sum of all same values and then then suffix sum
// if the total is odd, print YES else NO.

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pref[i] = pref[i - 1];
            pref[i] += a[i];
        }

        for (int i = 0; i < q; i++)
        {
            long long l, r, k;
            cin >> l >> r >> k;
            long long ans = pref[n] - (pref[r] - pref[l - 1]) + k * (r - l + 1);
            if (ans % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
