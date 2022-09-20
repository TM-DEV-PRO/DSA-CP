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

vector<int> suffixSum(vector<int> &array, int size_array)
{
    vector<int> suffix_arr(size_array);
    suffix_arr[size_array-1] = array[size_array-1];
    for (int i = size_array-2; i >= 0; i--)
    {
        suffix_arr[i] = (array[i] + suffix_arr[i - 1]);
    }

    return suffix_arr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}







