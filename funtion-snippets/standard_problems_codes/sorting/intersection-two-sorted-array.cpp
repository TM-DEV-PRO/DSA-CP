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

vector<int> intersectionSortedArrays(vector<int> &arr1, vector<int> &arr2)
{
    int p1 = 0, p2 = 0;
    int size_1 = arr1.size(), size_2 = arr2.size();
    vector<int> intersection;
    while (p1 < size_1 && p2 < size_2)
    {

        if (p1 > 0 && arr1[p1] == arr1[p1 - 1])
        {
            p1++;
            continue;
        }

        if (arr1[p1] > arr2[p2])
            p2++;
        else if (arr1[p1] < arr2[p2])
            p1++;
        else
        {
            intersection.push_back(arr1[p1]);
            p1++;
            p2++;
        }
    }

    return intersection;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}