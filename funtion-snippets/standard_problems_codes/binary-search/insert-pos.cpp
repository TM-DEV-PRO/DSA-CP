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
int insertPos(vector<int> &nums, int target, int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] > target)
            return insertPos(nums, target, low, mid);
        else
            return insertPos(nums, target, mid + 1, high);
    }

    return low;
}

int searchInsert(vector<int> &nums, int target)
{
    if (nums[nums.size() - 1] < target)
        return nums.size();
    int pos = insertPos(nums, target, 0, nums.size() - 1);
    return (pos != 0 && nums[pos - 1] == target) ? pos - 1 : pos;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}