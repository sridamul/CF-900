#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    cout << min(abs(v[n - 2] - v[0]), abs(v[n - 1] - v[1])) << "\n";
}