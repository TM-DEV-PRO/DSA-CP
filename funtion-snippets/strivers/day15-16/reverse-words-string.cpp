#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        
        for(int i=0;i<s.length();i++){
            if(i<s.length() && s[i]!=' '){
                string str ;
                int j=i;
                do{
                    str.push_back(s[j]);
                    j++;
                }while(j<s.length() && s[j]!=' ');
                i=j;
                words.push_back(str);
            }
        }
        
        string res = words[words.size()-1];
        
        for(int i=words.size()-2;i>=0;i--){
            res+=" " + words[i];
        }
        
        return res;
    }
};

// in-place
 string reverseWords(string s) {
        string res = "";
        
        for(int i=0;i<s.length();i++){
            if(i<s.length() && s[i]!=' '){
                
                int j=i;
                do{
                    j++;
                }while(j<s.length() && s[j]!=' ');
                
                if(res.length()>0)
                    res.push_back(' ');
                for(int k=j-1;k>=i;k--)
                    res.push_back(s[k]);
                i=j;
            }
        }
        
       
        reverse(res.begin(),res.end());
        return res;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}