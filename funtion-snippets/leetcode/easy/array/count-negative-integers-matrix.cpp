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

// to count negative integers in an array or coloumn of matrix
int negativeIntegers(vector<int> &array, int l, int r)
{
    if (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (array[mid] >= 0)
            return negativeIntegers(array, mid + 1, r);
        else
        {
            if (mid - 1 >= 0 && array[mid - 1] < 0)
                return negativeIntegers(array, l, mid - 1);
            else
                return array.size() - mid;
        }
    }

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}