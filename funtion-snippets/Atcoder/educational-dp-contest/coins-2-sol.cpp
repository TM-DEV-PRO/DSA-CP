#include<iostream>
#include<vector>
using namespace std;

double dp[3000][3000];
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
// double res = 0;
double probHead(vector<double> &prob,int n,int count){
    if(n==0){
        if(count>prob.size()/2)
            return 1;
        else
            return 0;
    }
    if(dp[n][count]!=D_INF) return dp[n][count];
    double ans=0.0;
    ans += prob[n-1]*probHead(prob,n-1,count+1); 
    ans += (1-prob[n-1])*probHead(prob,n-1,count); 
    dp[n][count] = ans;
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin>>n;

    vector<double> prob;
    for(int i=0;i<3000;i++){
        for ( int j=0;j<3000;j++){
            dp[i][j] = D_INF;
        }
    }
    for(int i=1;i<=n;i++){
        double x;
        cin>>x;
        prob.push_back(x);
    }

    double res = probHead(prob,n,0);
    printf("%.10lf\n", res);
    return 0;
}