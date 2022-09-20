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

// vector<int> smallerNumbersThanCurrent(vector<int> &array)
// {
//     unordered_map<int, int> smaller;
//     for (auto i : array)
//         smaller[i] = 0;
//     vector<int> ans = array;
//     sort(array.begin(), array.end());
//     for (int i = 1; i < array.size(); i++)
//     {
//         if (array[i - 1] != array[i])
//             smaller[array[i]] = i;
//     }
//     for (int i = 0; i < ans.size(); i++)
//     {
//         ans[i] = smaller[ans[i]];
//     }
//     return ans;
// }

void smallerNumbersThanCurrent(vector<int> &array, int max_possible)
{
    vector<int> frequency(max_possible, 0);

    // counting frequency
    for (auto i : array)
        frequency[i]++;

    // counting numbers smaller than current
    int no_of_elements = 0;
    for (int i = 0; i < frequency.size(); i++)
    {
        int temp = frequency[i];
        frequency[i] = no_of_elements;
        no_of_elements += temp;
    }

    // updating array to corresponding values

    for (int i = 0; i < array.size(); i++)
    {
        array[i] = frequency[array[i]];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}