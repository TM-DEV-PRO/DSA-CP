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
int findPairs(vector<int> &nums, int k)
{
    unordered_set<int> check, dup;
    int count = 0;
    for (auto i : nums)
    {
        if (check.find(i) == check.end())
            check.insert(i);
        else
            dup.insert(i);
    }

    for (auto i : check)
    {
        if (check.find(i - k) != check.end())
            count++;
    }

    return (k == 0) ? dup.size() : count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}