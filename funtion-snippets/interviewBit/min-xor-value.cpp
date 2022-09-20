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
int findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    int min_xor = A[0]^A[1];
    
    for(int i=1;i<A.size();i++) min_xor = min ( min_xor,A[i]^A[i-1]);
    
    return min_xor;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}