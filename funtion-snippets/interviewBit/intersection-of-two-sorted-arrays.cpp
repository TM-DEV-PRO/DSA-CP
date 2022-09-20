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
vector<int> intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> res;
    
    int i=0,j=0;
    
    while(i<A.size() && j<B.size()){
        if(A[i]==B[j]){
            res.push_back(A[i]);
            i++;
            j++;
        }
        
        else {
            (A[i]<B[j])?i++:j++;
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