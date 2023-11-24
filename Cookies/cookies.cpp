// https://codeforces.com/problemset/problem/129/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, odd = 0, even = 0;
    cin >> n;
    vector<int> c(n);
    for (auto &i : c)
    {
        cin >> i;
        sum += i;
        if (i & 1)
            odd++;
        else
            even++;
    }
    if (sum & 1)
        cout << odd;
    else
        cout << even;
    return 0;
}