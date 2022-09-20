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

void merge(vector<int> &array, int low, int mid, int high)
{
    int p1=low,p2=mid+1;

    vector<int> temp;

    while(p1<=mid && p2<=high){
        if(array[p1]<=array[p2]){
            temp.push_back(array[p1]);
            p1++;
        }

        else{
            temp.push_back(array[p2]);
            p2++;
        }
    }

    while(p1<=mid){
        temp.push_back(array[p1]);
        p1++;
    }
     while(p2<=high){
        temp.push_back(array[p2]);
        p2++;
    }
    int i=0;
    while(low<=high){
        array[low]=temp[i];
        low++;
        i++;
    }


}

void mergeSort(vector<int> &array, int low, int high)
{

    // atleast two elements
    if (high > low)
    {
        int mid = low + (high - low) / 2;

        mergeSort(array, low, mid);
        mergeSort(array, mid + 1, high);
        merge(array,low,mid,high);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}