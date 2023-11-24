#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        long long pw = 1000 * 1000 * 1000, ans = 0;
        while (s > 0)
        {
            while (s < pw)
                pw /= 10;
            ans += pw;
            s -= pw - pw / 10;
        }
        cout << ans << "\n";
    }
    return 0;
}