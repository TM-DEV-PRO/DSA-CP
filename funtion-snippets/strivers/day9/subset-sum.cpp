#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
 vector<int> subsetSums(vector<int> arr, int N)
    {
        if(N==0)
            return {0};
        
        vector<int> temp = subsetSums(arr,N-1);
        
        vector<int> sums;
        
        for(auto i:temp){
            sums.push_back(i);
            sums.push_back(i+arr[N-1]);
        }
        
        sort(sums.begin(),sums.end());
        
        return sums;
        
        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}