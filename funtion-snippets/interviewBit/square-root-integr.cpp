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
int sqrt(int A) {
    if(A==0)return 0;
    int low=1, high = A, ans=1;
    
    while(low<=high){
        int  mid = low + (high-low)/2;
        if(mid==A/mid)return mid; // as mid*mid will croos integer range
        else if(mid>A/mid)high=mid-1;
        else{
            low=mid+1;
            ans=mid;
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