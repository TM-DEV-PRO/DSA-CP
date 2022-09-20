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
vector<int> getRow(int A)
{
    if (A == 0)
    {
        vector<int> kthRow;
        kthRow.push_back(1);
        return kthRow;
    }

    vector<int> prev_row = getRow(A - 1);

    vector<int> kthRow(A + 1);
    kthRow[0] = 1;
    for (int i = 1; i < A; i++)
    {
        kthRow[i] = prev_row[i - 1] + prev_row[i];
    }

    kthRow[A] = 1;

    return kthRow;

    // vector<int> temp; // to store the resultant row

    // int n = 1;
    // for (int col = 0; col <= A; col++)
    // { // nth row will have n + 1 elements in pascal triangle
    //     temp.push_back(n);
    //     n = n * (A - col) / (col + 1); // mathematics
    // }
    // return temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}