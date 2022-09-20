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

int missingNumber(vector<int> &array, int N)
{
    long long int sum = (N * (N + 1)) / 2;

    for (auto i : array)
        sum -= i;
    return sum;
}

int missingNumberAlternate(vector<int> &array, int N)
{
    int flag = 0;
    for (auto i : array)
    {
        if (abs(i) > N - 1)
            flag = 1;
        else
        {
            array[abs(i) - 1] = 0 - array[abs(i) - 1];
        }
    }
    if (flag == 0)
        return N;
    int index = 0;
    for (auto i : array)
    {
        if (i > 0)
            return index + 1;
        index++;
    }

    return 0;
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
        vector<int> array(N - 1);
        for (auto &i : array)
            cin >> i;

        cout << missingNumberAlternate(array, N) << "\n";
        test--;
    }
    return 0;
}