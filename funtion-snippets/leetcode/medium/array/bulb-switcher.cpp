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
 int numTimesAllBlue(vector<int>& light) {
        int ans = 0;
        int bulb = INT_MIN;
        for(int i=0;i<light.size();i++){
            bulb = max(bulb,light[i]);
            if(i+1==bulb)
                ans++;
        }
        
        return ans;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}