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
int minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int i=0,j=0,k=0;
    int res = INT_MAX;
    
    while(i<A.size() && j<B.size() && k<C.size()){
        int ab = abs(A[i]-B[j]);
        int bc = abs(B[j]-C[k]);
        int ca = abs(C[k]-A[i]);
        res = min(max(ab,max(bc,ca)),res);
        
        if(ab>=bc && ab>=ca){
            if(A[i]<B[j])i++;
            else j++;
        }
        
        else if(bc>=ab && bc>=ca){
            if(B[j]<C[k])j++;
            else k++;
        }
        
        else {
            if(C[k]<A[i])k++;
            else i++;
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