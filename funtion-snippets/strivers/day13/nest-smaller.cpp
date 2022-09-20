#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
 vector<int> finalPrices(vector<int>& prices) {
        
        stack<int> st;
        for(int i= prices.size()-1;i>=0;i--){
            int before = prices[i];
            while(!st.empty() && prices[i]<st.top())
                st.pop();
            
            prices[i] = (st.empty())?prices[i]:prices[i]-st.top();
            
            st.push(before);
        }
        
        return prices; 
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}