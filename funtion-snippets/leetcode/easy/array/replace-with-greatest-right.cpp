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

void replaceWithGreatest(vector<int> &array, int size_array)
{
    int max_so_far = array[size_array - 1];
    array[size_array - 1] = -1;
    for (int i = size_array - 2; i >= 0; i--)
    {
        if (array[i] <= max_so_far)
            array[i] = max_so_far;
        else
            swap(array[i], max_so_far);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}