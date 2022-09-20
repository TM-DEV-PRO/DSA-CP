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
int singleNumber(const vector<int> &A) {
    int ans = A[0];
    
    for(int i=1;i<A.size();i++){
        ans = ans^A[i];
    }
    
    return ans;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}