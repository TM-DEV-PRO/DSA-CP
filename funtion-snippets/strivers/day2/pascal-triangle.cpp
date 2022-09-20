#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
 vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        
        for(int i=0;i<numRows;i++){
            vector<int> temp;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i)
                    temp.push_back(1);
                else{
                    int x = res[i-1][j-1] + res[i-1][j];
                    
                    temp.push_back(x);
                }
            }
            
            res.push_back(temp);
        }
        
        return res;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}