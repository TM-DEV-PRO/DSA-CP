#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
int romanToInt(string s) {
        unordered_map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int res = 0;
        int n = s.length();
        for(int i=0;i<n-1;i++){
            if(mp[s[i]]<mp[s[i+1]])
                res-=mp[s[i]];
            else
                res+=mp[s[i]];
        }
        
        res+=mp[s[n-1]];
        
        return res;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}