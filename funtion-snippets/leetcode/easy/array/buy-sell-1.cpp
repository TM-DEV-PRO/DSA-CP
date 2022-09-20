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

int maxProfit(vector<int> &prices)
{
    if (prices.empty())
        return 0;
    int sell = 0;
    int buy = prices[0];
    for (auto i : prices)
    {
        (i < buy) ? buy = i : sell = max(sell, i - buy);
    }

    return sell;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}