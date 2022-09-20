#include <limits.h>
#include <iostream>
#include <algorithm>
#include <cstring>
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
 bool check(vector<int> &weights,int D,int mid){
        int count=0,curr=0;
        for(auto i:weights){
            if(i>mid)
                return false;
            curr+=i;
            if(curr>mid){
                count++;
                curr=i;
            }
        
                
        }
        if(curr>mid)
            return false;
        else count++;
        
        if(count<=D)
            return true;
        return false;
    }

    int shipWithinDays(vector<int>& weights, int D) {
        int total = 0;
        for(auto i:weights)
            total+=i;
       // cout<<total<<" ";
        int low=1, high=total;
        int ans = INT_MAX;
        while(low<=high){
            int mid = low + (high-low)/2;
            //cout<<mid<<" ";
            if(check(weights,D,mid)){
                ans = min(ans,mid);
                high = mid-1;
            }
            else
                low=mid+1;
        }
        
        return ans;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}