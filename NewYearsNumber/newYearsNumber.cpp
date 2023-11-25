#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll mod = n % 2020;
        ll div = n / 2020;
        if (mod <= div)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}