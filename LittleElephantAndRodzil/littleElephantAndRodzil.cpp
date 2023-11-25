#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int temp;
    vector<int> v(n);
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        v[i] = temp;
        a[i] = temp;
    }
    sort(v.begin(), v.end());
    if (v[0] == v[1])
    {
        // cout << v[0] << " " << v[1];
        cout << "Still Rozdil";
    }
    else
    {
        vector<int>::iterator it = find(a.begin(), a.end(), v[0]);
        cout << distance(a.begin(), it) + 1 << "\n";
    }
    return 0;
}