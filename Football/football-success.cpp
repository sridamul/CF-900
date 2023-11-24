#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    string s;
    cin >> s;
    char temp = s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if (temp == s[i])
        {
            count++;
            if (count == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            count = 1;
        }
        temp = s[i];
    }
    cout << "NO" << endl;
    return 0;
}