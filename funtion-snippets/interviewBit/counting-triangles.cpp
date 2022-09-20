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

int nTriang(vector<int> &A)
{
    sort(A.begin(), A.end());
    int res = 0;
    for (int i = A.size() - 1; i > 1; i--)
    {
        int ans = 0;
        int j = i - 1, k = 0;
        while (k < j)
        {
            if (A[k] + A[j] > A[i])
            {
                ans += j - k;
                j--;
            }

            else
                k++;
        }

        res = (res % 1000000007 + ans % 1000000007) % 1000000007;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}