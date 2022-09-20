#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int test;
    std::cin>>test;
    while(test)
    {
        int n,x,k;

        cin>>n>>x>>k;

        if(x%k==0 || (n+1-x)%k==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        
    test--;
    }
return 0;
}