#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <iterator>
using namespace std;
int dominantIndex(vector<int> &nums)
{
    if (nums.size() == 1)
        return 0;
    int s_largest = min(nums[0], nums[1]), largest = max(nums[0], nums[1]), p1 = (nums[0] >= nums[1]) ? 0 : 1;
    int j = 0;
    for (auto i : nums)
    {
        if (j <= 1)
        {
            j++;
            continue;
        }
        if (i > largest)
        {
            p1 = j;
            s_largest = largest;
            largest = i;
        }
        else if (i > s_largest)
            s_largest = i;
        j++;
    }

    return (s_largest * 2 <= largest) ? p1 : -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}