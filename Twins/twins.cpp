#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// bool areAllValuesSame(const std::vector<int>& vec) {
//     return std::adjacent_find(vec.begin(), vec.end(), std::not_equal_to<int>()) == vec.end();
// }

int main()
{
    int n, c, count = 0, sum = 0;
    cin >> n;
    vector<int> vi;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        vi.push_back(c);
        sum += c;
    }
    sort(vi.begin(), vi.end());
    sum /= 2;
    int ans = 0;
    for (int i = vi.size() - 1; i >= 0; i++)
    {
        ans += vi.back();
        vi.pop_back();
        count++;
        if (ans > sum)
        {
            break;
        }
    }
    cout << count << endl;

    return 0;
}