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

int maxdiff(vector<int> &arr)
{
    int size = arr.size();
    int max_1=arr[0]+0,min_1=arr[0]+0,max_2=arr[0]-0,min_2=arr[0]-0;
    for(int i=0;i<size;i++){
        (arr[i]+i>=max_1)?max_1=arr[i]+i:min_1=min(min_1,arr[i]+i);
        (arr[i]-i>=max_2)?max_2=arr[i]-i:min_2=min(min_2,arr[i]-i);
    }
    return max(max_1-min_1,max_2-min_2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}