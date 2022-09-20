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
 
        long long int n,q;
        cin>>n;
        long long int sum = 0;
        long long int md = 1000000007;
        while(n--){
            long long int x;
            cin>>x;
            x = x%md;
            if(x<0)
                x+=md;
            
            sum= ((sum%md) + x)%md;
        }
        cin>>q;
    
        while(q--){
            long long int x;
            cin>>x;
            
            sum = (2 * (sum%md))%md;
            cout<<sum<<endl;
        }


        

return 0;
}