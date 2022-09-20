#include <iostream>
#include <algorithm>
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
vector<int> findPerm(const string A, int B) {
    int s =1,g=B;
    vector<int> res;
    
    for(auto c:A){
        if(c=='D'){
            res.push_back(g);
            g--;
        }
        else{
            res.push_back(s);
            s++;
        }
    }
    res.push_back(s);
    return res;
    
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}