#include <bits/stdc++.h>
using namespace std;

int main()
{
    string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char s;
    string str, ans;
    cin >> s >> str;
    for (int i = 0; i < str.size(); i++)
    {
        int index = keys.find(str[i]);
        if (s == 'R')
        {
            ans += keys[index - 1];
        }
        else
        {
            ans += keys[index + 1];
        }
    }
    cout << ans << endl;
    return 0;
}