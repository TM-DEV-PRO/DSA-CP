#include<bits/stdc++.h>
using namespace std;

vector<int> dp(100005,-1);
int solve(vector<int> &num,int k){
    if(k<=0)
        return 0;
    
    if(dp[k]!=-1)return dp[k];

    for(auto x:num){
        if(k>=x && !solve(num,k-x))
            dp[k]=1;
    }
    
    if(dp[k]==-1)
        dp[k]=0;

    return dp[k];
    
}

bool solve2(vector<int> &num,int k){
   vector<bool> dp(k);
    
   for(int stones=0;stones<=k;stones++){
    for(auto x:num){
       if(stones>=x && !dp[stones-x]){
            dp[stones] = true;
       }
    }
}
    
    return dp[k];
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,k;
cin>>n>>k;

vector<int> num(n);
for(auto &i:num)cin>>i;
//memset(dp,-1,sizeof(dp));
int is_win = solve(num,k);
(is_win==1)?cout<<"First":cout<<"Second";
return 0;
}