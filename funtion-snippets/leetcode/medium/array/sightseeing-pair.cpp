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
   int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        
        int mx = values[n-1] - (n-1);
        int res = INT_MIN;
        for(int i=n-2;i>=0;i--){
            res=max(res,values[i]+i+mx);
            mx = max(mx,values[i]-i);
        }
        
        return res;
        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}