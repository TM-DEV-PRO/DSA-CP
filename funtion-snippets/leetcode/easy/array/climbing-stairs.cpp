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
int minCostClimbingStairs(vector<int> &cost)
{
    int step_1 = 0, step_2 = 0;
    for (int i = cost.size() - 1; i >= 0; i--)
    {
        int step = cost[i] + min(step_1, step_2);
        step_2 = step_1;
        step_1 = step;
    }

    return min(step_1, step_2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}