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
        int x,a,b;

        cin>>x>>a>>b;

        cout<<(a +(100-x)*b)*10<<endl;
    test--;
    }
return 0;
}