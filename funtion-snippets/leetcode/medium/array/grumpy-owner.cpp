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
 int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) {
        int pre[customers.size()+1];
        pre[0]=0;
      
        for(int i=0;i<customers.size();i++){
            pre[i+1] = (grumpy[i]==0)?pre[i] + customers[i]:pre[i];
        }
        // for(auto i:pre)
        //     cout<<i<<" ";
        int ans = INT_MIN;
        int curr = 0,n=customers.size();
        for(int i=0;i<X;i++)
            curr+=customers[i];
        ans=max(ans,curr+pre[n]-pre[X]);
        for(int i=X;i<n;i++){
            curr = curr + customers[i] - customers[i-X];
            int left = pre[i-X+1];
            int right = pre[n] - pre[i+1];
            ans=max(ans,curr+left+right);
        }
        return ans;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}