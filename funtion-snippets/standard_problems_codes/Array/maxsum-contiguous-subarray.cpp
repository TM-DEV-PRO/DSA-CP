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

int maxsumSubArray(vector<int>&array){
    int maxSum=array[0], currSum=array[0];
    int flag=0;
    for(auto i: array){
        if(flag==0){
            flag=1;
            continue;
        }
        currSum= max(currSum+i,i);
        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}

// kadane's algorithm
int maxsumContArray(vector<int> &array, int size_array)
{
    int max_overall = array[0];
    int curr_max = array[0];

    for (int i = 1; i < size_array; i++)
    {
        curr_max = max(array[i], curr_max + array[i]);
        max_overall = max(max_overall, curr_max);
    }

    return max_overall;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}