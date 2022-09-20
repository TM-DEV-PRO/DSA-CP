#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;

long long int md = 1000000007LL;
// simple recursive solution
 vector<vector<string>> res;
    bool isPalin(string str){
        for(int i=0,j=str.length()-1;i<j;i++,j--){
            if(str[i]!=str[j])
                return false;
        }
        
        return true;
    }
    void solve(string s,int i,vector<string> op){
        if(i==s.length()){
            for(auto v:op){
                if(!isPalin(v))
                    return;
            }
            
            res.push_back(op);
            return;
        }
        
      
        vector<string> ip = op;
        ip[ip.size()-1].push_back(s[i]);
        solve(s,i+1,ip);
        string str="";
        str.push_back(s[i]);
        op.push_back(str);
        solve(s,i+1,op);
        
        
        
    }

    vector<vector<string>> partition(string s) {
        vector<string> op;
        string str = "";
        str.push_back(s[0]);
        op.push_back(str);
        solve(s,1,op);
        
        return res;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}