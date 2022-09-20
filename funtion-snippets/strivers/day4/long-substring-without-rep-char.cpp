#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
            return 0;
        if(s.length()==1)
            return 1;
        int i=0;
        unordered_set<int> st;
        int mx = 1;
        int curr=1;
        st.insert(s[i]);
        for(int j=1;j<s.length();j++){
            if(st.find(s[j])!=st.end()){
                
                while(s[i]!=s[j]){
                    st.erase(s[i]);
                    curr--;
                    i++;
                }
                st.erase(s[i]);
                i++;
               
                
            }
            
            else
                curr++;
            mx = max(mx,curr);
            st.insert(s[j]);
            //cout<<i<<" "<<j<<" "<<curr<<" "<<mx<<endl;
        }
        
        return mx;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}