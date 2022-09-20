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
int removeElement(vector<int> &A, int B) {
    
    int i=-1,j=0;
  
    while(j<A.size()){
        if(A[j]!=B){
            i++;
            swap(A[i],A[j]);
        }
        
        j++;
    }
    
    A.resize(i+1);
    
    return i+1;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}