#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
vector<int> repeatedNumber(const vector<int> &A) {
    long long x = 0, y=0;
    
    int n = 1;
    
    for(auto i:A){
        x += (long long)i;
        x -= n;
        y +=  (long long)i*(long long)i;
        y -= ((long long)n*(long long)n);
        n++;
    }
    
    y/=x;
    

    int a = (int)((x+y)/2);
    int b = y-a;
    vector<int> res;
        res.push_back(a);
        res.push_back(b);
    
    
    
   // cout<<res[0]<<" "<<res[1]<<endl;
    return res;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}