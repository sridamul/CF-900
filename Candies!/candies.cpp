#include <cstdio>
typedef long long ll;

int main()
{

    ll t;
    scanf("%lld", &t);
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
        ll m(1);
        for (ll p = 1; p < 50; p++)
        {
            // x + 2x + 4x + 8x + ....
            m = 2 * m + 1; // 3, 7, 15, 31 and so on...
            if (n % m)
            {
                continue;
            }
            printf("%lld\n", n / m);
            break;
        }
    }

    return 0;
}