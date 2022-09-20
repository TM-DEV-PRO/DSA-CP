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
double res = 0;
void probHead(vector<double> &prob,int n,int count,double p){
    if(n==0){
        if(count>prob.size()/2)
            res+=p;
        return;
    }
        
    
    probHead(prob,n-1,count+1,p*prob[n-1]); 
    probHead(prob,n-1,count,p*(1-prob[n-1])); 

    return;
}
int main() {
    int n;
    scanf("%d", &n);
    // dp[heads]
    // if we had i tosses, then tails=i-heads
    vector<double> dp(n + 1);
    // dp[i] - p-bility that there are i heads so far
    dp[0] = 1;
    for(int coin = 0; coin < n; ++coin) {
        double p_heads;
        scanf("%lf", &p_heads);
        for(int i = coin + 1; i >= 0; --i) {
            dp[i] = (i == 0 ? 0 : dp[i-1] * p_heads) + dp[i] * (1 - p_heads);
        }
    }
    double answer = 0;
    for(int heads = 0; heads <= n; ++heads) {
        int tails = n - heads;
        if(heads > tails) {
            answer += dp[heads];
        }
    }
    printf("%.10lf\n", answer);
    return 0;
}