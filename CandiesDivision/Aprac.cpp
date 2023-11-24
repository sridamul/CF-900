#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int px, py;
    cin >> px >> py;
    int ax, ay;
    cin >> ax >> ay;
    int bx, by;
    cin >> bx >> by;
    double dist = sqrt((px * px) + (py * py));
    double ld = sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
    cout << fixed << setprecision(10) << dist << "\n"
         << ld << "\n";
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