#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;

long long int md = 1000000007LL;
vector<vector<string>> res;
    
    void solve(int r,int n,vector<string> op){
        if(r==n){
            res.push_back(op);
            return;
        }
        
        for(int i=0;i<n;i++){
            int flag=1;
            for(int j=0;j<r;j++){
                if(op[j][i]=='Q'){
                    flag=0;
                    break;
                }
                   
            }
             if(flag==0)
                continue;
            int r1=r, c1=i;
            while(r1>=0 && c1>=0){
                
                if(op[r1][c1]=='Q'){
                    flag=0;
                    break;
                }
                r1--;
                c1--;
                    
            }
             if(flag==0)
                continue;
            r1=r, c1=i;
             while(r1>=0 && c1<n){
                
                if(op[r1][c1]=='Q'){
                    flag=0;
                    break;
                }
                r1--;
                c1++;
                    
            }
            if(flag==0)
                continue;
            op[r][i] = 'Q';
            
            solve(r+1,n,op);
            op[r][i] = '.';
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> op;
        string str;
        for(int i=1;i<=n;i++)
            str.push_back('.');
        for(int i=1;i<=n;i++)
            op.push_back(str);
        solve(0,n,op);
        return res;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}