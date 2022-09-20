#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long long md = 1000000007;
long double ans = 0.0;
long long res = 0;

long long int power(long long int x, int n){
    if(x==1 || n==0)
        return 1;
    if(n%2!=0)
        return ((x%md)*(power(x,n-1)%md))%md;
    return (power(((x%md)*(x%md))%md,n/2))%md;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int test;
    std::cin>>test;
    while(test)
    {
        int n;
        cin>>n;

        long long int p = power(2,n-1);
       
        
        cout<<p<<endl;;

    test--;
    }
return 0;
}