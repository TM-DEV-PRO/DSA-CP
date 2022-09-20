#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        string str = countAndSay(n-1);
        string res = "";
        
        int c = 1;
        for(int i=1;i<str.length();i++){
            if(str[i]!=str[i-1]){
                res+=to_string(c);
                res.push_back(str[i-1]);
                c=1;
            }
            else
                c++;
        }
        res+=to_string(c);
        res.push_back(str[str.length()-1]);
        
        return res;
        
    }
};
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}