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
int maxArea(vector<int> &A) {
    if(A.size()<2)return 0;
    
    int i =0, j=A.size()-1;
    int res = INT_MIN;
    while(i<j){
        res = max(res,min(A[i],A[j])*(j-i));
        if(A[i]<=A[j])i++;
        else j--;
    }
    return res;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}