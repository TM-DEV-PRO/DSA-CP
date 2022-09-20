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

int maximumDifference(vector<int> &array, int size)
{
    int curr_smallest = array[0];
    int res = array[1] - array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] - curr_smallest > res)
            res = array[i] - curr_smallest;

        if (array[i] < curr_smallest)
            curr_smallest = array[i];
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    std::cin >> test;
    while (test)
    {
        int N;
        cin >> N;
        vector<int> array(N);
        for (auto &i : array)
            cin >> i;

        cout << maximumDifference(array, N) << "\n";
        test--;
    }
    return 0;
}