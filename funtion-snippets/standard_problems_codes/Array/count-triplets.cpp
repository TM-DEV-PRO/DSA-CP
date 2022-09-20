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

int countTriplet(int array[], int index, int size)
{
    int sum = array[index];
    int start = 0, end = size - 1;
    int count = 0;
    while (start < end)
    {
        if (start == index)
            start++;
        if (end == index)
            end--;
        if (array[start] + array[end] == sum && start != end)
        {
            // cout<<array[start]<<" "<<array[end]<<"\n";
            count++;
            start++;
            end--;
        }
        else if (array[start] + array[end] < sum)
            start++;
        else
            end--;
    }

    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}