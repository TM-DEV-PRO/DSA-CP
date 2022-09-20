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

int peakMountain(vector<int> &arr, int low, int high){
    if(low>high)return -1;

    int mid = low + (high-low)/2;

    if((mid==0 || arr[mid]>arr[mid-1]) && (mid==arr.size()-1 || arr[mid]>arr[mid+1]))return mid;

    else if (mid==0 || arr[mid]>=arr[mid-1])return peakMountain(arr,mid+1,high);

    else return peakMountain(arr,low,mid-1);
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}