#include <limits.h>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <iterator>
using namespace std;
unordered_set<string> ss;
void sol(string ip, string op, int i){
        if(i==ip.length()){
            ss.insert(op);
            return;
        }
       
       string ip1 = op;
       op.push_back(ip[i]);
       string ip2 = op;
       sol(ip,ip1,i+1);
       sol(ip,ip2,i+1);
       
        return;
        
}

bool isSubsequence(string s, string t) {
        // sol(t,"",0);
        // if(ss.find(s)!=ss.end())
        //     return true;
        int si=0;
        for(int i=0;i<t.length();i++){
            if(t[i]==s[si])
                si++;
        }
        if(si==s.length())
            return true;
        return false;
}
// for checking multiple strings

 bool isSubsequence2(string s, string t) {
    vector<vector<int>> check(26);
    for(int i=0;i<t.length();i++){
        check[t[i]-'a'].push_back(i);
    }
    int prev=-1;
        for(auto i:s){
            if(check[i-'a'].size()==0)
                return false;
            int low = 0 , high = check[i-'a'].size()-1;
            while(low<=high){
                int mid = low + (high-low)/2;
                if(check[i-'a'][mid]<=prev)
                    low = mid + 1;
                else 
                    high = mid -1;
            }
            
            if(low==check[i-'a'].size())
                return false;
            else
                prev=check[i-'a'][low];
        }
        
        return true;
    }

//**# Recursive Approach**

//The idea is simple, we traverse both strings from one side to other side (say from rightmost character to leftmost). If we find a matching character, we move ahead in both strings. Otherwise we move ahead only in str2.

//Code:

    bool isSubSeq(string str1, string str2, int m, int n) 
{ 
    // Base Cases 
    if (m == 0) return true; 
    if (n == 0) return false; 
    // If last characters of two strings are matching 
    if (str1[m-1] == str2[n-1]) 
        return isSubSeq(str1, str2, m-1, n-1); 
    // If last characters are not matching 
    return isSubSeq(str1, str2, m, n-1); 
} 
    bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        return isSubSeq(s,t,m,n);
    }



// Approach Using TWO POINTER


    bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        int i = 0, j = 0;
        while(i < m && j < n) {
            if(s[i] == t[j]) {
                i++;
            }
            j++;
        }
        return i == m ? 1 : 0;
    }



//  USING DYNAMIC PROGRAMMING 
// if LCS of string A  nd B is equal to Size of String A then its True else false;

    int helper(string x, string y) {
        int m = x.size();
        int n = y.size();
        int dp[m+1][n+1];
        for(int i = 0; i<=m; i++)
        {
            dp[i][0]=0;
        }
        for(int i = 0; i<=n; i++)
        {
            dp[0][i]=0;
        }
        for(int i = 1; i<=m; i++){
            for(int j = 1; j<=n; j++){
                if(x[i-1]==y[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
    bool isSubsequence(string smaller, string larger) {

        int x  = helper(smaller,larger);
        if(x == smaller.size()){
            return true;
        }
        return false;      
    }


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}