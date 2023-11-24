#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    ll misha = max(3 * a / 10, a - (a / 250) * c);
    ll vasya = max(3 * b / 10, b - (b / 250) * d);
    if (misha > vasya)
    {
        cout << "Misha\n";
    }
    else if (misha < vasya)
    {
        cout << "Vasya\n";
    }
    else
    {
        cout << "Tie\n";
    }
    return 0;
}