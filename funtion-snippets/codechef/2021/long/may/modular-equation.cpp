#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;

long long  solve(long long n,long long m){
    vector<long long> check(n+1,1);

    for(long long i=2;i<=n;i++){
        long long t = m%i;
        res+=check[t];

        for(long long j=t;j<=n;j+=i){
            check[j]++;
        }
    }

    return res;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int test;
    std::cin>>test;
    while(test)
    {
        long long n,m;
        cin>>n>>m;
        solve(n,m);
        cout<<res<<endl;
        res=0;

    test--;
    }
return 0;
}