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
 int findDuplicate(vector<int>& nums) {
        for(auto i:nums){
            if(nums[abs(i)-1]<0)
                return abs(i);
            else{
                nums[abs(i)-1] = 0 - nums[abs(i)-1];
            }
        }
        
        return 0;
    }
int findDuplicate2(vector<int>& nums) {
     int tor = nums[0];
     int hare = nums[0];
        do{
            tor=nums[tor];
            hare=nums[nums[hare]];
        }while(tor!=hare);
        
        tor = nums[0];
        while(tor!=hare){
            tor=nums[tor];
            hare=nums[hare];
        }
        
        return hare;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}