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
vector<int> searchRange(const vector<int> &A, int B) {
    vector<int> res;
    res.push_back(-1);
    res.push_back(-1);
    int low =0, high =A.size()-1;
    while(low<=high){
        int mid = low + (high -low)/2;
        if(A[mid]==B && (mid==0 || A[mid-1]!=B)){
            res[0]=mid;
            break;
        }
        else if(A[mid]>=B) high =mid-1;
        
        else {
            low=mid+1;
        }
    }
        low =0;
        high =A.size()-1;
    while(low<=high){
        int mid = low + (high -low)/2;
        if(A[mid]==B && (mid==A.size()-1 || A[mid+1]!=B)){
            res[1]=mid;
            break;
        }
        else if(A[mid]<=B) low =mid+1;
        
        else {
            high=mid-1;
        }
    }
    
    return res;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}