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

vector<int> squareSortedArray(vector<int> &array)
{
    int size_array = array.size();
    int start = 0, end = size_array - 1, curr = size_array - 1;
    vector<int> sortedArray(size_array);

    while (start <= end)
    {
        if (abs(array[start]) >= abs(array[end]))
        {
            sortedArray[curr] = pow(array[start], 2);
            curr--;
            start++;
        }
        else
        {
            sortedArray[curr] = pow(array[end], 2);
            curr--;
            end--;
        }
    }

    return sortedArray;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}