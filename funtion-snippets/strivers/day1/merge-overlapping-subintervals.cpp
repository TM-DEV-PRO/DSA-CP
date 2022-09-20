#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;

static bool cmp(vector<int> &v1, vector<int> &v2){
        return v1[0]<v2[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        vector<vector<int>> res;
        int j=0;
        res.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(res[j][1]>=intervals[i][0]){
                
                if(res[j][1]<intervals[i][1])
                    res[j][1]=intervals[i][1];
                
            }
            else{
                res.push_back(intervals[i]);
                j++;
            }
        }
        
         
            
        return res;
            
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}