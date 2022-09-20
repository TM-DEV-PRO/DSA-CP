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
int arrayNesting(vector<int>& nums) {
        int ans = INT_MIN;
        vector<bool> visited(nums.size(),false); 
        for(int i=0;i<nums.size();i++){
            if(!visited[i]){
                int j=nums[i],count=0;
                do{
                    j=nums[j];
                    count++;
                    visited[j] = true;
                        
                }while(j!=nums[i]);
                
                ans=max(ans,count);
                
            }
      
        }
        
        return ans;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}