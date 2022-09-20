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
int distanceBetweenBusStops(vector<int> &distance, int start, int destination)
{
    int sum = accumulate(distance.begin(), distance.end(), sum);
    int p1 = (start <= destination) ? start : destination;
    int res = 0;
    while (p1 < ((start > destination) ? start : destination))
    {
        res += distance[p1];
        p1++;
    }

    return min(res, sum - res);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}