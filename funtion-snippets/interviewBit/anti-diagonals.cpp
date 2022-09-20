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

vector<vector<int>> diagonal(vector<vector<int>> &A)
{
    int n = A.size();
    int N = 2 * (n - 1) + 1; //number of vectors in ans
    vector<vector<int>> ans(N);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            ans[i + j].push_back(A[i][j]); //sum of index values in 2d array gives the index in ans
    }
    return ans;

    // vector<vector<int>> res;

    // int size = A.size();

    // for (int i = 0; i < size; i++)
    // {
    //     vector<int> temp;
    //     for (int j = 0, k = i; j < size && k >= 0; j++, k--)
    //     {
    //         temp.push_back(A[j][k]);
    //     }

    //     res.push_back(temp);
    // }

    // for (int i = 1; i < size; i++)
    // {
    //     vector<int> temp;
    //     for (int j = i, k = size - 1; j < size && k >= 0; j++, k--)
    //     {
    //         temp.push_back(A[j][k]);
    //     }

    //     res.push_back(temp);
    // }

    // return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}