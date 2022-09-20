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
vector<int> fairCandySwap(vector<int> &A, vector<int> &B)
{
    int sum_A = 0, sum_B = 0;
    unordered_set<int> Alice;
    for (auto i : A)
    {
        sum_A += i;
        Alice.insert(i);
    }
    sum_B = accumulate(B.begin(), B.end(), sum_B);
    int mid = (sum_A + sum_B) / 2;
    vector<int> res;
    if (sum_A > sum_B)
    {
        for (auto i : B)
        {
            if (Alice.find(i + (sum_A - mid)) != Alice.end())
            {
                res.push_back(i + (sum_A - mid));
                res.push_back(i);

                break;
            }
        }
    }
    else
    {
        for (auto i : B)
        {
            if (Alice.find(i - (sum_B - mid)) != Alice.end())
            {
                res.push_back(i - (sum_B - mid));
                res.push_back(i);
                break;
            }
        }
    }

    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}