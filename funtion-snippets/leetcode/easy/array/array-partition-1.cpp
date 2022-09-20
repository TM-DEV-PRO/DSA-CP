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
#include <iterator>
using namespace std;

int arrayPairSum(vector<int> &nums)
{
    int max = 10000;
    vector<int> count(2 * max + 2, 0), sortedArray(nums.size());
    for (auto i : nums)
        count[max + i + 1]++;

    for (int i = 1; i < count.size(); i++)
    {
        count[i] += count[i - 1];
    }

    for (auto i : nums)
    {
        sortedArray[count[max + 1 + i] - 1] = i;
        count[max + 1 + i]--;
    }

    int sum = 0;
    for (int i = 0; i < sortedArray.size(); i += 2)
    {

        sum += sortedArray[i];
    }

    return sum;
}

vector<int> positiveArrayCountingSort(vector<int> &array)
{
    int max = 101;
    vector<int> count(max, 0), sortedArray(array.size());
    for (auto i : array)
        count[i]++;

    for (int i = 1; i < count.size(); i++)
    {
        count[i] += count[i - 1];
    }

    for (auto i : array)
    {
        sortedArray[count[i] - 1] = i;
        count[i]--;
    }

    return sortedArray;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}