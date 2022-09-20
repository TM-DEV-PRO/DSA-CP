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
const long long  INF = 1e18L + 5;
int dp[3001][3001];
int lcsMemo(string str1,string str2, int i, int j){
    if(i==0 || j==0) return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    if(str1[i-1]==str2[j-1])
        dp[i][j] = 1 + lcsMemo(str1,str2,i-1,j-1);
    else
        dp[i][j] = max(lcsMemo(str1,str2,i-1,j),lcsMemo(str1,str2,i,j-1)); 

    return dp[i][j];
}
string lcsTab(string str1,string str2, int n1, int n2){
    int tab[n1+1][n2+1];
    for(int i=0;i<=n1;i++)
        for(int j=0;j<=n2;j++)
            if(i==0 || j==0)
                tab[i][j]=0;
    
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            if(str1[i-1]==str2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }

            else {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    string res = "";
    while(n1>0 && n2>0){
        if(str1[n1-1]==str2[n2-1]){
            res.push_back(str1[n1-1]);
            n1--;
            n2--;
        }

        else {
            if(dp[n1-1][n2]>=dp[n1][n2-1])
                n1--;
            else
                n2--;
        }
    }

    reverse(res.begin(),res.end());

    return res;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string str1,str2;
cin>>str1>>str2;
memset(dp,-1,sizeof(dp));
cout<<lcsTab(str1,str2,str1.length(),str2.length());
return 0;
}