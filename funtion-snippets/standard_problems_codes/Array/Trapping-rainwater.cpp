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
        vector<int> height(N);
        for (auto &i : height)
            cin >> i;

        vector<int> leftMax(N), rightMax(N);

        leftMax[0] = height[0];
        rightMax[N - 1] = height[N - 1];
        int tempLeft = leftMax[0], tempRight = rightMax[N - 1];
        for (int i = 0, j = N - 1; i < N, j >= 0; i++, j--)
        {
            if (height[i] >= tempLeft)
            {
                leftMax[i] = height[i];
                tempLeft = height[i];
            }
            else
                leftMax[i] = tempLeft;
            if (height[j] >= tempRight)
            {
                rightMax[j] = height[j];
                tempRight = height[j];
            }
            else
                rightMax[j] = tempRight;
        }

        int totalWater = 0;

        for (int i = 0; i < N; i++)
        {
            totalWater += min(leftMax[i], rightMax[i]) - height[i];
        }

        cout << totalWater << "\n";
        test--;
    }
    return 0;
}