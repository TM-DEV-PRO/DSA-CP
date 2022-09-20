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

bool isSumPresent(vector<int> &array, int sum)
{
    int size = array.size();
    int curr_sum = 0;
    int start = 0;
    for (int i = 0; i < size; i++)
    {
        if (curr_sum < sum)
        {
            curr_sum += array[i];
        }

        if (curr_sum > sum)
        {
            while (curr_sum > sum)
            {
                curr_sum -= array[start];
                start++;
            }
        }

        if (curr_sum == sum)
        {
            cout << start + 1 << " " << i + 1 << "\n";
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    std::cin >> test;
    while (test)
    {
        int N, sum;
        cin >> N >> sum;

        vector<int> array(N);
        for (auto &i : array)
            cin >> i;
        bool isPresent = isSumPresent(array, sum);
        if (!isPresent)
            cout << -1 << "\n";
        test--;
    }
    return 0;
}