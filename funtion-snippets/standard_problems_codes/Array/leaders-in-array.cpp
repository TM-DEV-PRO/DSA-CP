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

void leadersInArray(vector<int> &array, int size)
{
    int curr_max = array[size - 1] - 1;

    vector<int> leaders;
    for (int i = size - 1; i >= 0; i--)
    {
        if (array[i] >= curr_max)
        {
            curr_max = array[i];
            leaders.push_back(array[i]);
        }
    }

    for (int i = leaders.size() - 1; i >= 0; i--)
        cout << leaders[i] << " ";
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
        leadersInArray(array, N);
        cout << "\n";
        test--;
    }
    return 0;
}