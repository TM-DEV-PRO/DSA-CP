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

int maxOccuredInt(vector<int> &left, vector<int> &right, int maxRange)
{
    int size = left.size();
    int count[maxRange + 1] = {0};
    for (int i = 0; i < size; i++)
    {
        count[left[i]]++;
        count[right[i] + 1]--;
    }

    int max_count = count[0], max_num = 0;
    for (int i = 1; i <= maxRange; i++)
    {
        count[i] += count[i - 1];
        if (count[i] > max_count)
        {
            max_count = count[i];
            max_num = i;
        }
    }

    return max_num;
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
        cin>>N;
        vector<int> left(N), right(N);

       for(auto &i:left)cin>>i;
       for(auto &i: right)cin>>i;

        cout<<maxOccuredInt(left, right, 100000)<<"\n";

        test--;
    }
    return 0;
}