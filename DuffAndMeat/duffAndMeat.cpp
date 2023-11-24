#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int s = 0;
    vector<int> a(n), p(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i] >> p[i];
    }
    int mn = p[0];
    for (int i = 0; i < n; ++i)
    {
        if (mn > p[i])
        {
            mn = p[i];
        }
        s += a[i] * mn;
    }
    cout << s << "\n";
    return 0;
}