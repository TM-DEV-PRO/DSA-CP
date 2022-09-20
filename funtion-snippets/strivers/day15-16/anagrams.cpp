#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        int arr[26] = {0};
        
        for(auto i:s)
            arr[i-'a']++;
        for(auto i:t)
            arr[i-'a']--;
        
        for(auto i:arr)
            if(i!=0)
                return false;
        
        return true;
    }
};
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}