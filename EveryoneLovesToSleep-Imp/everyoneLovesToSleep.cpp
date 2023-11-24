#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, H, M;
    cin >> n >> H >> M;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int h, m;
        cin >> h >> m;
        mp[h * 60 + m]++; // Stores the alarm clocks time in the map
    }
    int t = 0;
    while (!mp[(H * 60 + M + t) % (24 * 60)]) // Checks whether the sleep time and time in alarm clock meets, if meets then the difference(t) is noted which later is converted to hours and minutes.
        t++;
    t %= 24 * 60;
    cout << t / 60 << " " << t % 60 << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // cout.tie(0);
    // cout << fixed;
    // cout << setprecision(10);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}