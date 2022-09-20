#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,k;
cin>>n>>k;
int check[k+1],dp[k+1];
vector<int> can(n);
memset(check,0,sizeof(check));
for(auto &i:can){
    cin>>i;
    check[i]++;
}

for(int i=1;i<=k;i++){
    check[i]+=check[i-1];
}

dp[0]=1;

for(int i=1;i<=k;i++){
    dp[i] = ((dp[i-1]%mod)*((n-check[i-1])%mod))%mod;
}

cout<<dp[k];
return 0;
}