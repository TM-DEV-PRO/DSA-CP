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
int titleToNumber(string A) {
    if(A.empty())return 0;
    if(A.length()==1)return A[0]-'A'+1;
    int ans=0;
    for(int i=0;i<A.length();i++){
        ans+=(A[i]-'A'+1)*pow(26,A.length()-1-i);
    }
    return ans;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}