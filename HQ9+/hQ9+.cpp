#include <iostream>
using namespace std;
// Read the problem properly. the question says that print yes only the actions which outputs. So, + shouldn't be included.
int main()
{
    string p;
    cin >> p;
    int flag = 0;
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] >= 33 && p[i] <= 126)
        {
            if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
                flag = 1;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO";
    return 0;
}