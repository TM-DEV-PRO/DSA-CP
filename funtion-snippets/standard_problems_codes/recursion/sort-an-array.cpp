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

void insert(vector<int> &array, int temp)
{
    if(array.empty() || array[array.size()-1]<=temp){
        array.push_back(temp);
    }
    int val = array[array.size()-1];
    array.erase(array.begin() + (array.size() - 1));
    insert(array,temp);
    array.push_back(val);
    return;

}

void sortAnArray(vector<int> &array)
{
    if (array.size() == 1)
        return;

    int temp = array[array.size() - 1];
    array.erase(array.begin() + (array.size() - 1));
    sortAnArray(array);
    insert(array, temp);
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}