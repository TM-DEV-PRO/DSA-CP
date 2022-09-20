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
int diffPossible(vector<int> &A, int B) {
    if(A.size()<2)return 0;
    int i =0,j=1;
    
    while(j<A.size()){
      if(i==j)j++;
      else {
          if(A[j]-A[i]==abs(B))return 1;
          else if(A[j]-A[i]<abs(B))j++;
          else i++;
      }
    }
    
    return 0;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}