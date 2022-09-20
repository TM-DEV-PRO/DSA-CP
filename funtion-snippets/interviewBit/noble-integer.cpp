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
int solve(vector<int> &A) {
    sort(A.begin(),A.end());
    if(A[A.size()-1]==0)return 1;
    
    for(int i=0;i<A.size()-1;i++){
        if(A[i]!=A[i+1]){
            if((A.size()-1-i)==A[i])return 1;
        }
    }
    
    return -1;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}