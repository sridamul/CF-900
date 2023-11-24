#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        int ans = 0;
        int pw = 1000 * 1000 * 1000; // 1e9
        while (s > 0)
        {
            while (s < pw)     // Lets consider s = 123
                pw /= 10;      // pw becomes 100
            ans += pw;         // adds the pw to the ans
            s -= pw - pw / 10; // deducts the discount and then minus the pw from the s. s = 123-90 = 33.
        }
        cout << ans << endl;
    }

    return 0;
}