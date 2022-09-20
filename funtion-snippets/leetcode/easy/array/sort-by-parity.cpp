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

void sortByParity(vector<int> &array)
{
    int size_array = array.size();
    int start = 0, end = size_array - 1;
    int flag1 = 1, flag2 = 1;

    while (start < end)
    {
        if (flag1 == 1 && array[start] % 2 == 0)
        {
            start++;
        }
        else
        {
            flag1 = 0;
        }

        if (flag2 == 1 && array[end] % 2 != 0)
        {
            end--;
        }
        else
        {
            flag2 = 0;
        }

        if (flag1 == 0 && flag2 == 0)
        {
            swap(array[start], array[end]);
            flag1 = 1;
            flag2 = 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}