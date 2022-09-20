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
  void sol(vector<int> &candidates, int target, int sum, vector<vector<int>> &res, vector<int> op, int begin){
        if(sum>target)
            return;
        if(sum==target)
        {
            res.push_back(op);
            return;
        }
        
    
        for(int i=begin;i<candidates.size();i++){
            op.push_back(candidates[i]);
            sum+=candidates[i];
            sol(candidates,target,sum,res,op,i);
            op.pop_back();
            sum-=candidates[i];
        }
        
        return;
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> op;
        sort(candidates.begin(),candidates.end());
        sol(candidates,target,0,res,op,0);
    
        return res;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}