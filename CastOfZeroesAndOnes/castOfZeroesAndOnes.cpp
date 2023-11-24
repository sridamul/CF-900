#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    string s;
    cin >> n >> s;
    int ones = count(s.begin(), s.end(), '1');
    int zeroes = count(s.begin(), s.end(), '0');
    cout << n - (2 * min(zeroes, ones)) << endl;
    return 0;
}

// 11011 - count 1 = 4, count 0 = 1, n = 5. Therefore, remaining string left over after the operation is 5-2(1) = 3;