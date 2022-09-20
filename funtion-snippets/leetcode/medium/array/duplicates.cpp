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
   vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        for(auto i:nums){
            if(nums[abs(i)-1]<0)
                res.push_back(abs(i));
            else
               nums[abs(i)-1] = 0 - nums[abs(i)-1]; 
        }
        
        return res;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}