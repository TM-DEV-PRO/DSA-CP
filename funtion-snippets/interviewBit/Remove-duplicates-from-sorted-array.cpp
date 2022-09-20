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
int removeDuplicates(vector<int> &A) {
    if(A.size()==0)return 0;
    if(A.size()==1)return 1;
    
    int i=0,j=1;
    
    while(j<A.size()){
       
        
      if(A[i]!=A[j]){
            i++;
            swap(A[i],A[j]);
        }
        
        j++;
    }
    
    return i+1;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}