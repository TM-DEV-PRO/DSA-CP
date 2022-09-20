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
int maxChunksToSorted(vector<int>& arr) { 
        int mx=0, ans=0;
        for(int i=0;i<arr.size();i++){
            mx=max(mx,arr[i]);
            if(mx==i)
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