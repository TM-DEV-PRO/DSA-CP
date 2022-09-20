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
int dp[100001];

int costMemo(vector<int> &height, int i, int k){
    if(i==0)
        return 0;
    if(i==1)
        return abs(height[1] - height[0]);

    if(dp[i]!=-1)return dp[i];
    
    int minCost = INT_MAX;

    for(int j = 1 ;j<=i && j<=k;j++){
        int curr = (dp[i-j]==-1)?costMemo(height,i-j,k):dp[i-j];
        curr+= abs(height[i]-height[i-j]);
        minCost=min(minCost,curr);
    }
    return dp[i]=minCost;
}

int costTab(vector<int> &height, int k){
    int n = height.size();
    int tab[n];
    tab[0]=0;
    tab[1]=abs(height[1]-height[0]);
    for(int i=2;i<n;i++){
        int minCost = INT_MAX;
        for(int j=1;j<=i&&j<=k;j++){
            minCost = min(minCost,tab[i-j]+abs(height[i]-height[i-j]));
        }

        tab[i] = minCost;
    }

    return tab[n-1];
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N,K;
cin>>N>>K;
vector<int> height(N) ;
for(auto &i:height)cin>>i;
memset(dp,-1,sizeof(dp));
cout<<costTab(height,K);
return 0;
}