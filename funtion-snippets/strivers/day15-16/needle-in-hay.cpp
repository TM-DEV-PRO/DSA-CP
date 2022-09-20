#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())
            return 0;
        if(haystack.empty())
            return -1;
        needle.length();
        string temp = "";
        int s=0,e=0;
        int k=0;
        while(e<k){
            temp.push_back(haystack[e]);
            e++;
        }
        
        if(temp==needle)
            return s;
        
        while(e<haystack.length()){
            temp.push_back(haystack[e]);
            temp.erase(temp.begin()+0);
            e++;
            s++;
            if(temp==needle)
                return s;
        }
        
        return -1;
        
    }
};
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}