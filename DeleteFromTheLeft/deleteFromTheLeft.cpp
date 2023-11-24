#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    int i = s.size() - 1;
    int j = t.size() - 1;
    int mn = min(i, j);
    while (mn >= 0)
    {
        if (s[i] != t[j])
        {
            break;
        }
        i--;
        j--;
        mn--;
    }
    cout << i + j + 2 << "\n";
    return 0;
}