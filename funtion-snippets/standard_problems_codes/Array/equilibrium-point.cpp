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

bool isEquilibriumPoint(vector<int> &array)
{
    int size = array.size();
    int l_sum = 0, r_sum = 0;
    accumulate(array.begin(), array.end(), r_sum);

    vector<int> points;

    for (int i = 0; i < size; i++)
    {
        r_sum -= array[i];
        if (l_sum == r_sum)
            points.push_back(array[i]);
        l_sum += array[i];
    }

    if (points.empty())
        return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}