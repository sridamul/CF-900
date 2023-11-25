#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    int f[n], t[n];
    vector<ll> vi;
    for (ll i = 0; i < n; ++i)
    {
        cin >> f[i] >> t[i];
        if (t[i] > k)
        {

            ll temp = f[i] - (t[i] - k);
            vi.push_back(temp);
        }
        else
        {
            vi.push_back(f[i]);
        }
    }
    sort(vi.begin(), vi.end());
    cout << vi.back() << "\n";
    return 0;
}