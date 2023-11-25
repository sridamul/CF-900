#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        int flag = 0;
        for (size_t i = 0; i < 8; i++)
        {
            cin >> s;
            if (s == "RRRRRRRR")
            {
                flag = 1;
            }
        }
        if (flag)
        {
            cout << "R\n";
        }
        else
            cout << "B\n";
    }
    return 0;
}