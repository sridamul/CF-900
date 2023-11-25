#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

// To get the minimum possible maximum number in the array is... to do the and operation between each and every element.
int main()
{
    ll t, n, temp;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> arr(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = arr[0];
        for (int i = 1; i < n; i++)
        {
            ans = ans & arr[i];
        }
        cout << ans << "\n";
    }
    return 0;
}