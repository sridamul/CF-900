#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t, n, a, b, c, d;
    cin >> t;
    while (t--)
    {
        int ABsum, ABsub, CDsum, CDsub;
        ABsum = ABsub = CDsum = CDsub = 0;
        cin >> n >> a >> b >> c >> d;
        ABsum = a + b;
        ABsub = a - b;

        CDsum = c + d;
        CDsub = c - d;

        if ((n * ABsum >= CDsub) && (n * ABsub <= CDsum))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}