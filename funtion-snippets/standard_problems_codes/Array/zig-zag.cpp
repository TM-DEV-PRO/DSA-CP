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

void zigZag(vector<int>&arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        else
        {
            if (arr[i] < arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}