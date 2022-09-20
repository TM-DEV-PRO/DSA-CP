#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
class Solution {
public:
    string longestPalindrome(string s) {
        
        int mxlen = 1;
        int st=0,ed=0;
        for(int i=0;i<s.length();i++){            
            //even palindrome
            int j=i,k=i+1;
            for(;j>=0&&k<s.length();j--,k++){
                if(s[j]!=s[k]){
                    if(k-j-1>mxlen){
                        mxlen=k-j-1;
                        st=j+1;
                        ed=k-1;
                    }
                    
                    break;
                }
            }
            
            if(k-j-1>mxlen){
                mxlen=k-j-1;
                st=j+1;
                ed=k-1;
            }
            
            j=i;
            k=i;
            //odd palindrome
             for(;j>=0&&k<s.length();j--,k++){
                if(s[j]!=s[k]){
                    if(k-j-1>mxlen){
                        mxlen=k-j-1;
                        st=j+1;
                        ed=k-1;
                    }
                    
                    break;
                }
            }
            if(k-j-1>mxlen){
                mxlen=k-j-1;
                st=j+1;
                ed=k-1;
            }
            
        }
        
        string res;
        
        while(st<=ed)
            res.push_back(s[st++]);
        
        return res;
    }
};
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}