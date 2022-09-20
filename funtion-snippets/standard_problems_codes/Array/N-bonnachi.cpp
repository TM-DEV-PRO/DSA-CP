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

vector<int> nBonnaci(int N, int M)
{
    vector<int> nums;
    for (int i = 0; i < N; i++)
        nums.push_back(0);
    nums[N - 1] = 1;

    int sum = 1;
    int start = 0;
    M -= N;
    while (M > 0)
    {
        nums.push_back(sum);
        sum -= nums[start];
        sum += nums[nums.size() - 1];
        start++;
        M--;
    }

    return nums;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    std::cin >> test;
    while (test)
    {
        int N, M;
        cin >> N >> M;
        vector<int> nums = nBonnaci(N, M);
        for (int i = 0; i < M; i++)
            cout << nums[i] << " ";

        cout << "\n";
        test--;
    }
    return 0;
}