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

int duplicateInArray(vector<int> &array, int size_array)
{

    int check[size_array] = {0};
    int i = 0;
    for (; i < size_array; i++)
    {
        if (check[array[i]] == array[i])
            return array[i];
        else
            check[array[i]] = array[i];
    }

    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}