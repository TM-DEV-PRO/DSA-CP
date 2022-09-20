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
int costMemo(vector<int> &height, int i){
    if(i==0){
        return 0;
    }
    if(i==1){
        return abs(height[i]-height[i-1]);
    }
    int l,r;
    if(dp[i-1]!=-1)l=dp[i-1];
    else {
        l = costMemo(height,i-1);
        dp[i-1]=l;
    }
    if(dp[i-2]!=-1)r=dp[i-2];
    else {
        r = costMemo(height,i-2);
        dp[i-2]=r;
    }
    return dp[i]=min(l+abs(height[i]-height[i-1]),r+abs(height[i]-height[i-2]));
}

int costTab(vector<int> &height){
    int n = height.size();
    int tab[n];
    tab[0]=0;
    tab[1]=abs(height[1]-height[0]);
    for(int i=2;i<n;i++){
    
        tab[i] = min(tab[i-1]+abs(height[i]-height[i-1]),tab[i-2]+abs(height[i]-height[i-2]));
    }

    return tab[n-1];
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N;
cin>>N;
vector<int> height(N) ;
for(auto &i:height)cin>>i;
memset(dp,-1,sizeof(dp));
cout<<costTab(height);
return 0;
}