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

vector<int> flip(string str)
{
    int count = 0;
    vector<int> array;
    for (auto i : str)
    {
        if (i == '1')
        {
            count++;
            array.push_back(-1);
        }

        else
            array.push_back(1);
    }
    vector<int> res;
    if (count == str.length())
        return res;

    int start = 0, end = 0, curr_start = 0;
    int max_sum = array[0], curr_sum = array[0], flag = 0;
    for (int i = 1; i < array.size(); i++)
    {
        if (curr_sum + array[i] >= array[i])
        {
            curr_sum += array[i];
            if (curr_sum > max_sum)
            {
                start = curr_start;
                max_sum = curr_sum;
                end = i;
            }
        }
        else if (curr_sum + array[i] < array[i])
        {
            curr_sum = array[i];
            curr_start = i;
            if (curr_sum > max_sum)
            {
                start = curr_start;
                max_sum = curr_sum;
                end = i;
            }
        }
    }
    res.push_back(start + 1);
    res.push_back(end + 1);

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    std::cin>>test;
    while(test)
    {
        
    test--;
    }
    return 0;
}