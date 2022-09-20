#include <bits/stdc++.h>
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

vector<int> prefixSum(vector<int> &array, int size_array)
{
    vector<int> prefix_arr;
    prefix_arr.push_back(array[0]);
    for (int i = 1; i < size_array; i++)
    {
        prefix_arr.push_back(array[i] + prefix_arr[i - 1]);
    }

    return prefix_arr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}







