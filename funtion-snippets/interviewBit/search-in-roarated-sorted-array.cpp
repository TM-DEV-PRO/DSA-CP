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
int search(const vector<int> &A, int B)
{
    int low = 0, high = A.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (A[mid] == B)
            return mid;

        if (A[low] < A[mid])
        {
            if (A[low] <= B && A[mid] > B)
            {
                high = mid - 1;
            }

            else
                low = mid + 1;
        }

        else
        {
            if (B > A[mid] && B <= A[high])
                low = mid + 1;

            else
                high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}