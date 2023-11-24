#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    string s;
    int zeroes, ones;
    cin >> t;
    while (t--)
    {
        cin >> s;
        zeroes = 0;
        ones = 0;
        for (char c : s)
        {
            if (c == '0')
            {
                zeroes++;
            }
            else
                ones++;
        }
        int ans = min(ones, zeroes);
        if (ans & 1)
        {
            cout << "DA\n";
        }
        else
            cout << "NET\n";
    }
    return 0;
}