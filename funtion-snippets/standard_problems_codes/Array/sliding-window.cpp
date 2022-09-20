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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> array;
    int size = array.size(), w_size, sum = 0;

    for (int i = 0; i < size-1; i++)
    {
        int temp;
        cin >> temp;
        array.push_back(temp);
    }

    cin >> w_size;
    

    for (int i = 0; i < w_size; i++)
    {
        sum += array[i];
    }

    for (int i = w_size; i < size - 1; i++)
    {
        sum -= array[i - w_size];

        sum += array[i];
    }

    return 0;
}