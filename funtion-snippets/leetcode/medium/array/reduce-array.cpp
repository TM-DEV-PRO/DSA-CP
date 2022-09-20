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
int minSetSize(vector<int>& arr) {
        vector<int> check(100001,0);
        
        for(auto i:arr)
            check[i]++;
        sort(check.begin(),check.end(),greater<int>());
        int ans=0;
        int curr = 0;
        for(auto i:check){
            curr+=i;
            if(i!=0)ans++;
            if(curr>=arr.size()/2 || i==0)
                break;
        }
        
        return ans;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}