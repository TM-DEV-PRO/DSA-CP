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

int thirdMax(vector<int> &nums)
{

    int one = INT32_MIN, two = INT32_MIN, three = INT32_MIN;
    for (int num : nums)
    {
        if (num == one || num == two || num == three)
            continue;

        if (num > one)
        {
            three = two;
            two = one;
            one = num;
        }
        else if (num > two)
        {
            three = two;
            two = num;
        }
        else if (num > three)
        {
            three = num;
        }
    }

    return three == INT32_MIN ? one : three;
}

int thirdMax(vector<int> &nums)
{
    int size = nums.size();
    if (size == 1)
        return nums[0];
    else if (size == 2)
        return max(nums[0], nums[1]);
    int f_max = max(max(nums[0], nums[1]), nums[2]);
    int s_max = (nums[0] >= nums[1]) ? min(nums[0], max(nums[1], nums[2])) : min(max(nums[0], nums[2]), nums[1]);
    int t_max = min(min(nums[0], nums[1]), nums[2]);
    //cout<<f_max<<" "<<s_max<<" "<<t_max<<"\n";
    for (int i = 3; i < size; i++)
    {
        if (nums[i] > f_max)
        {
            t_max = s_max;
            s_max = f_max;
            f_max = nums[i];
        }
        else if ((nums[i] > s_max && nums[i] != f_max) || (nums[i] < s_max && s_max == f_max && nums[i] != t_max))
        {
            t_max = s_max;
            s_max = nums[i];
        }

        else if ((nums[i] > t_max && nums[i] != s_max && nums[i] != f_max) || (nums[i] < t_max && t_max == s_max))
            t_max = nums[i];

        else
            continue;
    }
    //cout<<f_max<<" "<<s_max<<" "<<t_max;
    return (f_max == s_max || f_max == t_max || s_max == t_max) ? f_max : t_max;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}