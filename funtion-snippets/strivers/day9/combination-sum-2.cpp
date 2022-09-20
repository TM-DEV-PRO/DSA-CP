#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
 vector<vector<int>> res;
   void solve(vector<int> &can, int n, int tar, vector<int> op){
        if(n==0){
            if(tar==0)
                res.push_back(op);
            return;
        }
        if(tar<0)
            return;
        if(tar==0){
            res.push_back(op);
            return;
        }
        
        solve(can,n-1,tar,op);
        op.push_back(can[n-1]);
        solve(can,n-1,tar-can[n-1],op);
            
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> op;
        solve(candidates,candidates.size(),target,op);
        set<vector<int>> st;
        for(auto i:res)
            st.insert(i);
        
        res.clear();
        
        for(auto it=st.begin();it!=st.end();it++)
            res.push_back(*it);
            
        
        return res;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}