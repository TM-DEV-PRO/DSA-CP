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
 int maxSumTwoNoOverlap(vector<int>& A, int L, int M) {
       vector<int> pre(A.size()+1);
       for(int i=0;i<A.size();i++){
           pre[i+1] = pre[i] + A[i];
       }
       long int ans = INT_MIN ;
       for(int i=L;i<=A.size();i++){
           long int temp = pre[i]-pre[i-L];
           for(int j=M;j<i-L;j++){
               ans = max(ans,temp+pre[j]-pre[j-M]);
           }
           
           for(int j=i+M;j<=A.size();j++){
               ans = max (ans,temp+pre[j]-pre[j-M]);
           }
       }
        
        return ans;
    
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}