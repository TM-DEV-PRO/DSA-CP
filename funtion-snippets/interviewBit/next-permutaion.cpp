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

vector<int> nextPermutation(vector<int> &A)
{
    int i = A.size() - 2;
    while (i >= 0)
    {
        if (A[i] < A[i + 1])
            break;
        i--;
    }

    if (i == -1)
    {
        for (int k = 0, j = A.size() - 1; k < j; k++, j--)
        {
            swap(A[k], A[j]);
        }
        return A;
    }

    for (int j = A.size() - 1; j > i; j--)
    {
        if (A[j] > A[i])
        {
            swap(A[j], A[i]);
            break;
        }
    }
    for (int k = i + 1, j = A.size() - 1; k < j; k++, j--)
    {
        swap(A[k], A[j]);
    }

    return A;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}