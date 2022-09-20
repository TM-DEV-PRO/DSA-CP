#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
double myPow(double x, int n) {
         if(x==1 || x==0 || n==0)
            return 1;
        
        int f1 = (n<0)?1:0;
        n = abs(n);
        double res;
        if(n%2!=0)
             res = x*myPow(x,n-1);
        else
            res=myPow(x*x,n/2);
        if(f1==1)
            return 1/res;
        else
            return res;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}