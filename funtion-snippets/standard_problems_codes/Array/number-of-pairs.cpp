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

int noOfPairs(int *arr,int size, vector<int> &count, int size_arr2){
    
    int res=0;
    
    for(int i=0;i<size;i++){
        if(arr[i]==1)continue;
        else if(arr[i]==2){
            
            res+= size_arr2-count[5];
            res+=count[2];
        }
        else {
            res+=size_arr2-count[arr[i]+1];
            if(arr[i]==3)res+=count[3];
            else res+=count[2];
            
        }
    }
return res;
}



void countingSort(int *arr,int size, vector<int> &count)
{
    
    for (int i = 0; i < size; i++)
        count[arr[i]]++;
    for (int i = 1; i < count.size(); i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = 0; i < size; i++)
        count[arr[i]]--;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n,m;
        cin>>n>>m;
        int arr1[n], arr2[m];

        vector<int> count(1002);

    return 0;
}