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
        long long int a,b;
        cin>>a>>b;

        
        if(b==1)
            cout<<"NO"<<endl;

        else{ 
            cout<<"YES"<<endl;
            cout<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
        
        }
    test--;
    }
return 0;
}