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

vector<int> unionSortedArrays(vector<int> arr1, vector<int> arr2)
{
    vector<int> uni;
    int p1 = 0, p2 = 0;
    while (p1 < arr1.size() && p2 < arr2.size())
    {
        if (p1 > 0 && arr1[p1] == arr1[p1 - 1])
        {
            p1++;
            continue;
        }
        if (p2 > 0 && arr2[p2] == arr2[p2 - 1])
        {
            p2++;
            continue;
        }

        if (arr1[p1] < arr2[p2])
        {
            uni.push_back(arr1[p1]);
            p1++;
        }
        else if (arr1[p1] > arr2[p2])
        {
            uni.push_back(arr2[p2]);
            p2++;
        }
        else
        {
            uni.push_back(arr1[p1]);
            p1++;
            p2++;
        }
    }

    while (p1 < arr1.size())
    {
        if (p1 > 0 && arr1[p1] == arr1[p1 - 1])
        {
            p1++;
            continue;
        }

        uni.push_back(arr1[p1++]);
    }
    while (p2 < arr2.size())
    {
        if (p2 > 0 && arr2[p2] == arr2[p2 - 1])
        {
            p2++;
            continue;
        }

        uni.push_back(arr2[p2++]);
    }

    return uni;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}