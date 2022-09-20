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
  vector<vector<int>> res;
    void sol(vector<int> &nums,int i,vector<int> op){
        if(i==nums.size()){
            res.push_back(op);
            return;
        }
        sol(nums,i+1,op);
        op.push_back(nums[i]);
        sol(nums,i+1,op);
       
        return;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> op;
        sol(nums,0,op);
        return res;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}