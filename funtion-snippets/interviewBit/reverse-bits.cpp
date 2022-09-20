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
unsigned int reverse(unsigned int A) {
   unsigned int ans=0;
    for( int i=0;i<32;i++){
        if(A&(1<<i)){
            ans^=1<<(31-i);
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