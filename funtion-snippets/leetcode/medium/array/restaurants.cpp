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
static bool compare( vector<int> &v1,   vector<int> &v2){
        if(v1[1]!=v2[1])
            return (v1[1]>v2[1]);
        else
            return (v1[0]>v2[0]);
    }

    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        sort(restaurants.begin(),restaurants.end(), compare);
        vector<int> res;
        
        for(auto j:restaurants){
                if(((j[2]&veganFriendly)==veganFriendly) && j[3]<=maxPrice && j[4]<=maxDistance)
                    res.push_back(j[0]);
            }
            
        
        return res;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}