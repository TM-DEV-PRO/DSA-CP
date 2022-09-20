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
bool check(vector<int> &A, int curr_pages, int B)
{
    int count = 1, sum = 0;
    for (auto i : A)
    {
        if (i > curr_pages)
            return false;
        if (sum + i > curr_pages)
        {
            count++;
            sum = i;
            if (count > B)
                return false;
        }

        else
            sum += i;
    }

    return true;
}

int books(vector<int> &A, int B)
{
    if (B > A.size())
        return -1;
    int low = 0, high = 0;
    for (auto i : A)
        high += i;
    int ans = INT_MAX;
    // cout<<low<<" "<<high<<endl;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        //  cout<<mid<<" ";
        if (check(A, mid, B))
        {
            ans = min(ans, mid);
            high = mid - 1;
        }

        else
        {
            low = mid + 1;
        }
    }
    // cout<<endl;

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}