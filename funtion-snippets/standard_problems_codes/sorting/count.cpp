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

void countSort(vector<int> &array, int range)
{
    int count[range + 1] = {0};
    for (auto i : array)
        count[i]++;

    for (int i = 1; i <= range; i++)
    {
        count[i] += count[i - 1];
    }

    vector<int> temp(array.size());

    for (int i = array.size() - 1; i >= 0; i--)
    {
        temp[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }

    int j = 0;
    for (auto i : temp)
    {
        array[j] = i;
        j++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}