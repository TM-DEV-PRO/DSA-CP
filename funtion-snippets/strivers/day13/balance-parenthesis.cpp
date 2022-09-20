#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
  bool isValid(string s) {
        if(s.length()==1)
            return false;
        stack<char> st;
        for(auto i:s){
            if(i=='(' || i=='{' || i=='[')
                st.push(i);
            else if(st.empty())
                return false;
            else if((i==')' && st.top()=='(') || (i=='}' && st.top()=='{') || (i==']' && st.top()=='['))
                st.pop();
            else 
                return false; 
        }
        
        return st.empty();
        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}