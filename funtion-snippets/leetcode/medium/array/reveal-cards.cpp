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
 vector<int> deckRevealedIncreasing(vector<int>& deck) {
        deque<int> dq;
        for(int i=0;i<deck.size();i++)
            dq.push_back(i);
        
        vector<int> ans(deck.size());
        sort(deck.begin(),deck.end());
        for( auto i: deck){
            ans[dq.front()] = i;
            dq.pop_front();
            if(!dq.empty()){
                dq.push_back(dq.front());
                dq.pop_front();
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