#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n, temp;
    // cin >> n;
    // set<int> s;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> temp;
    //     s.insert(temp);
    // }
    // cout << s.size() << endl;

    int ans = 1, n, c = 0, i;
    cin >> n;
    int a[n + 9];
    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = 1; i <= n; i++)
    {
        c = 0;
        int x = a[i];
        while (x != -1)
        {
            x = a[x];
            c++;
        }
        ans = max(ans, c);
    }
    cout << ans << endl;
    return 0;
}