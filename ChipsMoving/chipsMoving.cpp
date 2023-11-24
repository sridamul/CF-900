#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, Ocnt = 0, Ecnt = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        if (temp & 1)
            Ocnt++;
        else
            Ecnt++;
    }
    cout << min(Ecnt, Ocnt) << "\n";
    return 0;
}