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
void sortColors(vector<int> &A) {
    

    int i=-1,j=0,k=A.size();
    
    while(j<k){
        if(A[j]==1)
            j++;
        else if(A[j]==0){
            i++;
            swap(A[i],A[j]);
            j++;
        }
        
        else {
            k--;
            swap(A[k],A[j]);
        }
    }
    
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}