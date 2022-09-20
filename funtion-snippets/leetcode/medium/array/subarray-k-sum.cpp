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
 int numOfSubarrays(vector<int>& arr, int k, int threshold) {
       int curr=0,ans=0;
        for(int i=0;i<k;i++){
            curr+=arr[i];
        }
        
        if(curr/k>=threshold)
            ans++;
        for(int i=k;i<arr.size();i++){
            curr = curr + arr[i] -arr[i-k];
            if(curr/k>=threshold)
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