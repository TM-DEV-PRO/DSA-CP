#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    int n = strs.size();
    if(n==1)
        return strs[0];
    string res = strs[0];
    for(int i=1;i<n;i++){
        string s = "";
        for(int j=0;j<strs[i].length()&&j<res.length();j++){
            if(strs[i][j]==res[j])
                s.push_back(res[j]);
            else
                break;
        }
        
        if(s=="")
            return s;
        res=s;
    }
     return res;
    }
};
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}