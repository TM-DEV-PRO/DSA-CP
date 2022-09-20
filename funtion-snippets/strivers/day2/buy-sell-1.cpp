#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
 int maxProfit(vector<int>& prices) {
    int buy = prices[0],profit=INT_MIN;
     for(auto i:prices){
         profit=max(profit,i-buy);
         buy=min(buy,i);
     } 
    if(profit<=0)
        return 0;
    return profit;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}