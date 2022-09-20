#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
vector <int> countDistinct (int A[], int n, int k)
    {
        unordered_map<int,int> mp;
        vector<int> res;
        for(int i=0;i<k;i++)
            mp[A[i]]++;
        res.push_back(mp.size());
        
        for(int i=k;i<n;i++){
            int key = A[i-k];
            mp[key]--;
            if(mp[key]==0)
                mp.erase(key);
            mp[A[i]]++;
            res.push_back(mp.size());
                
        }
        
        return res;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}