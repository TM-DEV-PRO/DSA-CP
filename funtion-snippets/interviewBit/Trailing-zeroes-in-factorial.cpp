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
int trailingZeroes(int A) {
    int ans=0;
    for(int i=5;A/i>=1;i=i*5){
        ans+=A/i;
    }
    
    return ans;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}