#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

// In this problem, we need to make an array with even numbers in the first half and the odd numbers in the second half.
// Then we apply the GCD functionality to the new vector. Then increment the count.

int main()
{
    ll t, n, temp;
    vector<int> a, even, odd;
    cin >> t;
    while (t--)
    {
        int count(0);
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            temp % 2 ? odd.push_back(temp) : even.push_back(temp);
        }
        for (int i : even)
            a.push_back(i);
        for (int j : odd)
            a.push_back(j);
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = i + 1; j < a.size(); j++)
            {
                temp = __gcd(a[i], 2 * a[j]);
                if (temp > 1)
                {
                    count++;
                }
            }
        }
        cout << count << "\n";
        a.clear();
        even.clear();
        odd.clear();
    }
    return 0;
}