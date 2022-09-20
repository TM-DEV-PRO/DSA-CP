class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int nsmall[n], psmall[n];
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[i]<=heights[st.top()])
                st.pop();
            psmall[i] = (st.empty())?-1:st.top();
            st.push(i);
        }
        
        while(!st.empty())
            st.pop();
        
       for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[i]<=heights[st.top()])
                st.pop();
            nsmall[i] = (st.empty())?n:st.top();
            st.push(i);
        }
        
        int res=0;
        
        for(int i=0;i<n;i++){
            int r = nsmall[i];
            int l = psmall[i];
            
            res = max(res,(r-l-1)*heights[i]);
        }
        
        return res;
    }
};