#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;

// O(n)
int countSetBits(int n)
    {
        
        n++;
        int count = 0;
        while(n--){
            int x = 0;
            while(x<32){
                if((n&(1<<x))!=0)
                    count++;
                x++;
            }
        }
        return count;
}

// O(logn)
int countSetBits(int n)
    {
        int res = 0;
        int count = 1;
        int x = 1;
        
        while(n>1){
            while((x*2*2)<=n){
                x*=2;
                count = 2*count + x;
            }
            x=x*2;
            n=n-x;
            //cout<<n<<" ";
            res += n+1 + count;
            count=1;
            x=1;
        }
        if(n>=1)res+=count;
        return res;        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}