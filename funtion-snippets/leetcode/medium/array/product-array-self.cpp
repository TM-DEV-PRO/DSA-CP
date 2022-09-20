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
  vector<int> productExceptSelf(vector<int>& nums) {
       
       int left = 1,right=1,n=nums.size();
        vector<int> res(n,1);
       for(int i=0;i<n;i++){
           res[i] *= left;
           left*=nums[i];
           res[n-1-i] *= right;
           right *= nums[n-1-i];
       } 
        
        return res;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}