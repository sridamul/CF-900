#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, temp;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        vector<int> vi;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            vi.push_back(temp);
        }
        sort(vi.begin(), vi.end());
        int mx = vi.back();
        for (int i = 0; i < n; i++)
        {
            if ((mx - vi[i]) % 2 == 0 || mx == vi[i])
            {
                continue;
            }
            else
                flag = 1;
        }
        if (!flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}