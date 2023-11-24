#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    vector<int> vi;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        vi.push_back(temp);
    }
    sort(vi.begin(), vi.end());
    cout << vi[0];
    for (int i = 1; i < vi.size(); i++)
    {
        cout << " " << vi[i];
    }
    return 0;
}