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

void reverseArray(vector<int> &array, int start_index, int end_index)
{

    int low = start_index, high = end_index;

    while (low < high)
    {
        swap(array[low], array[high]);

        low++;
        high--;
    }
}

void rotateArray(vector<int> &array, int size_array, int no_of_rotations)
{
    reverseArray(array,0,no_of_rotations-1);
    reverseArray(array,no_of_rotations,size_array-1);
    reverseArray(array,0,size_array-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}