#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    int count = 0, mx = 0;
    for (int i = 0; i < 2 * n; ++i)
    {
        if (v[i % n] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        mx = max(count, mx);
    }
    cout << mx << "\n";
    return 0;
}