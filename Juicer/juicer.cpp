#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n, b, d, temp;
    int sum(0), count(0);
    cin >> n >> b >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp <= b)
        {
            sum += temp;
        }
        if (sum > d)
        {
            count++;
            sum = 0;
        }
    }
    cout << count << "\n";
    return 0;
}