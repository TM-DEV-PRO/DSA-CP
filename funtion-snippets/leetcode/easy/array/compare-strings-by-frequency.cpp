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
int bSearch(vector<int> &arr, int left, int right, int x)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] <= x)
        {
            if (mid + 1 >= arr.size() || arr[mid + 1] > x)
                return arr.size() - mid - 1;
            return bSearch(arr, mid + 1, right, x);
        }
        else
        {
            if (mid - 1 < 0 || arr[mid - 1] <= x)
                return arr.size() - mid;
            return bSearch(arr, left, mid - 1, x);
        }
    }
    return 0;
}

vector<int> numSmallerByFrequency(vector<string> &queries, vector<string> &words)
{
    vector<int> w_count;
    for (auto i : words)
    {
        int count[26] = {0};
        char c = i[0];
        int min_count = 11;
        for (auto j : i)
        {
            count[j - 'a']++;
            if (j <= c)
            {
                min_count = count[j - 'a'];
                c = j;
            }
        }
        w_count.push_back(min_count);
    }

    sort(w_count.begin(), w_count.end());
    vector<int> q_count;
    for (auto i : queries)
    {
        int count[26] = {0};
        char c = i[0];
        int min_count = 11;
        for (auto j : i)
        {
            count[j - 'a']++;
            if (j <= c)
            {
                min_count = count[j - 'a'];
                c = j;
            }
        }
        q_count.push_back(min_count);
    }

    vector<int> res;
    for (auto i : q_count)
    {
        res.push_back(bSearch(w_count, 0, w_count.size() - 1, i));
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}