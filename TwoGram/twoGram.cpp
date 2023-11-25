#include <bits/stdc++.h>
using namespace std;

string str;

int call(string sub)
{
    int cnt = 0, maxi = 0;

    for (int i = 0; i < str.size() - 1; i++)
    {
        if (str[i] == sub[0] && str[i + 1] == sub[1])
            cnt++;
    }

    return cnt;
}

int main()
{
    int n, maxi = 0;
    string s;
    cin >> n >> str;

    for (int i = 0; i < str.size(); i++)
    {
        string sub = str.substr(i, 2); // substr has index and the length as its parameter
        int temp = call(sub);

        if (temp > maxi)
        {
            maxi = temp;
            s = sub;
        }
    }
    cout << s << endl;
    return 0;
}